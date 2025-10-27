//------------------------------------------------------------------------------
// $Header: D:\\Repository\\D\\Dev\\BasicGames\\Translator\\Translated\\intrinsics.h,v 1.7 2011-10-16 22:59:27-04 alan Exp alan $
//
// File for all intrinsic or helper functions for the Basic to C++ translation
// program.
//
// $Log: intrinsics.h,v $
// Revision 1.7  2011-10-16 22:59:27-04  alan
// Added define for ABS(x) and removed the overloaded int and float ABS routines.
// Corrected a capitalization on function ST().
//
// Revision 1.6  2011-09-30 17:08:38-04  alan
// Defined LINE_BUFFER size to get rid of magic numbers for buffers.
//
// Revision 1.5  2011-09-19 10:39:11-04  alan
// Split the Power() routine into FPower() and IPower() to separate for different variable types.
// Added two different versions of INSTR().
// Added LEN() routine.
// Added float ABS() routine.
// Fixed up LEFT_str() routine.
// Added StringCat(), and RIGHT_str() routines.
//
// Revision 1.4  2011-09-04 23:19:13-04  alan
// Removed the Data index and line variables from the NextData() routine and made them
// global so they could be changed by other routines.
// Added routine RestoreData() to change the above Data linenumber and index values
// to point to the given DATA line.
//
// Revision 1.3  2011-09-03 20:06:04-04  alan
// <>
//
// Revision 1.2  2011-07-31 12:36:41-04  alan
// Completely modify the READ support routines to allow input from data statements.
//
// Revision 1.1  2009-08-25 22:41:53-04  alan
// Fixed the MyFpf() routine to figure out the comma-separator justification.  Now the comma-separator is replaced in the format string with a \100 which is then converted in the MyFpf() routine to enough spaces to justify the following text on the next multiple of 14
// columns.
//
// Revision 1.0  2009-08-23 18:04:36-04  alan
// Initial revision
//
//------------------------------------------------------------------------------
#ifndef IntrinsicsH
#define IntrinsicsH

//#include <mem.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

#define PrintZone   14

#define min(a,b)	(((a)<(b))?(a):(b))
#define ABS(x)      (((x)<0)?(-x):(x))

#define LINE_BUFFER 1000
#define WINTH         

typedef unsigned long addr;

char GLB_StrCatBuf[LINE_BUFFER];



#ifndef TESTING

//------------------------------------------------------------------------------
// These are PRINT (not USING) helper functions.
//------------------------------------------------------------------------------
// NOTE: Positions on the output are 1-based not 0-based and the max position is the screen WIDTH (see WIDTH statement)
// NOTE: TAB,SPC may only be used with PRINT, LPRINT and PRINT# statements.

// SPC Function.  Addeds 'spcs' blanks to output;
//     SPC() has an implied ';' after it (ie. TAB() at end-of-line will not emit new-line).
//
void b2c_SPC(char* buf,int posn)
{
    const char* blanks="                                                                                                    ";
    if((1<=posn)&&(posn<=255)){
        strcat(buf,blanks+100-posn );
    }
}

// TAB Function.  To space to position 'posn' on the output.  If current posn is
//     already past that position then output a new-line and go to that position.
//     1 <= posn <= 255
//     TAB() has an implied ';' after it (ie. TAB() at end-of-line will not emit new-line).
// 
void b2c_TAB(char* buf,int posn)
{
    if((1<=posn)&&(posn<=255)){
        int len=strlen(buf);
        len = posn-len;
        if(len>0){
            b2c_SPC(buf,len-1);
        }else if(len<0){
            strcat(buf,"\n");
            b2c_SPC(buf,posn-1);
        }else{
            // Do nothing, current buffer position is where TAB(posn) was aiming for.
        }     
    }
}


void b2c_FLT(char *buf,float value)
{
    char lbuf[100];
    sprintf(lbuf,"%7.2f",value);
    strcat(buf,lbuf);
}

void b2c_INT(char *buf,int value)
{
    char lbuf[100];
    sprintf(lbuf,"%d",value);
    if(value>=0) strcat(buf," ");
    strcat(buf,lbuf);
}

//------------------------------------------------------------------------------
// Changed name MyFpf to b2c_fprintf 

#pragma argsused
int b2c_fprintf(FILE *fh,char *fmt,...){
    // This is a fprintf() routine that prints to a buffer so that
    // the next subroutine zone() can implement BASIC's zone system
    // for comma delimited print statements.
    char buf[500],tfmt[20],tbuf[200];
    buf[0]=tfmt[0]=tbuf[0]=0;
    static int LinePosn=1;
    
    va_list argptr;
    int cnt;
    char chr;

    va_start(argptr, fmt);
    char *pf=fmt,*pb=buf;
    while(*pf!=0){
        switch(*pf){
            case '\100':
                // Pad to next zone start.
                while(LinePosn%PrintZone!=0) {
                    *pb++ = ' ';
                    LinePosn++;
                }
                pf++;
                break;
            case '\n':
                // If we get a end-of-line then terminate the buffer and print
                // it out.  Clear the buffer and correct our pointer.
                LinePosn=1;
                *pb=0;
                fprintf(fh,"%s\n",buf);
                buf[0]=0;
                pf++;
                break;
            case '%':
                if(*(pf+1)=='%'){
                    // Escaped '%'s get copied as is.
                    *pb++ = *pf;
                    pf+=2;
                }else{
#pragma warn -aus
                    char* ptf=NULL;
                    // If we have a format field then use it to convert an argument.
                    ptf=tfmt;
                    // Copy over the format field until the last character.
                    *ptf++ = *pf++;
                    chr=tolower(*pf);
                    while((chr!='d')&&(chr!='f')&&(chr!='s')){
                        *ptf++ = *pf++;
                        chr=tolower(*pf);
                    }
                    *ptf++ = chr; // Copy the terminating character.
                    *ptf=0;       // Terminate the format string.
                    pf++;         // Increment over the terminating char in input format.
                    *pb=0;        // Terminate output buffer so we can concat.
                    // Print the value of the argument to our temp buffer (tbuf).
                    switch(chr){
                        case 'd': sprintf(tbuf,tfmt,va_arg(argptr,int)); break;
                        case 'f': sprintf(tbuf,tfmt,va_arg(argptr,double)); break;
                        case 's': sprintf(tbuf,tfmt,va_arg(argptr,char*)); break;
                    }
                    // Concatenate the temp buf to the output buf and adjust our pointers.
                    strcat(buf,tbuf);
                    LinePosn=strlen(buf);
                    pb=&buf[LinePosn];
                }
                break;
            default:
                // Normal characters we just copy as is.
                *pb++ = *pf++;
                LinePosn++;
                break;
        }
    }
    // Terminate our buffer and print out anything that remains.
    *pb=0;
    if(buf[0]!=0) fprintf(fh,"%s",buf);
    va_end(argptr);

    return(cnt);
}

#pragma argsused
int b2c_printf(char *fmt,...){
    // This is a fprintf() routine that prints to a buffer so that
    // the next subroutine zone() can implement BASIC's zone system
    // for comma delimited print statements.
    char buf[500],tfmt[20],tbuf[200];
    buf[0]=tfmt[0]=tbuf[0]=0;
    static int LinePosn=1;
    
    va_list argptr;
    int cnt;
    char chr;

    va_start(argptr, fmt);
    char *pf=fmt,*pb=buf;
    while(*pf!=0){
        switch(*pf){
            case '\100':
                // Pad to next zone start.
                while(LinePosn%PrintZone!=0) {
                    *pb++ = ' ';
                    LinePosn++;
                }
                pf++;
                break;
            case '\n':
                // If we get a end-of-line then terminate the buffer and print
                // it out.  Clear the buffer and correct our pointer.
                LinePosn=1;
                *pb=0;
                fprintf(stdout,"%s\n",buf);
                buf[0]=0;
                pf++;
                break;
            case '%':
                if(*(pf+1)=='%'){
                    // Escaped '%'s get copied as is.
                    *pb++ = *pf;
                    pf+=2;
                }else{
#pragma warn -aus
                    char* ptf=NULL;
                    // If we have a format field then use it to convert an argument.
                    ptf=tfmt;
                    // Copy over the format field until the last character.
                    *ptf++ = *pf++;
                    chr=tolower(*pf);
                    while((chr!='d')&&(chr!='f')&&(chr!='s')){
                        *ptf++ = *pf++;
                        chr=tolower(*pf);
                    }
                    *ptf++ = chr; // Copy the terminating character.
                    *ptf=0;       // Terminate the format string.
                    pf++;         // Increment over the terminating char in input format.
                    *pb=0;        // Terminate output buffer so we can concat.
                    // Print the value of the argument to our temp buffer (tbuf).
                    switch(chr){
                        case 'd': sprintf(tbuf,tfmt,va_arg(argptr,int)); break;
                        case 'f': sprintf(tbuf,tfmt,va_arg(argptr,double)); break;
                        case 's': sprintf(tbuf,tfmt,va_arg(argptr,char*)); break;
                    }
                    // Concatenate the temp buf to the output buf and adjust our pointers.
                    strcat(buf,tbuf);
                    LinePosn=strlen(buf);
                    pb=&buf[LinePosn];
                }
                break;
            default:
                // Normal characters we just copy as is.
                *pb++ = *pf++;
                LinePosn++;
                break;
        }
    }
    // Terminate our buffer and print out anything that remains.
    *pb=0;
    if(buf[0]!=0) fprintf(stdout,"%s",buf);
    va_end(argptr);

    return(cnt);
}


//------------------------------------------------------------------------------
// All data is in string format.  We just want to index through it with this routine.
//------------------------------------------------------------------------------
int Data_Index=0;
int Data_Line=0;
char* NextData(){
    char *rtn=NULL;

    //fprintf(stdout,"NextData() Data_Index=%d\n",Data_Index);
    //fprintf(stdout,"NextData() Data_Line=%d\n",Data_Line);
    //fprintf(stdout,"NextData()='%s'\n",rtn);
    // Start on next line if past end of current line.
    if((ProgramData[Data_Line].LineNum!=0)&&(Data_Index>=ProgramData[Data_Line].Size)){
        Data_Line++;
        Data_Index=0;
    }
    // If we go beyond the end of data complain.
    if(ProgramData[Data_Line].LineNum==0){
        fprintf(stderr,"ERROR: Reading data beyond end (Line=%d,Index=%d)!\n",Data_Line,Data_Index);
        exit(1);
    }
    // Get a pointer to the data.
    rtn=ProgramData[Data_Line].SData[Data_Index];
    Data_Index++;  // Increment our counter.
    //fprintf(stdout,"NextData()='%s'\n",rtn);
    return(rtn);
}

//------------------------------------------------------------------------------
void RestoreData(int LineNo){
	Data_Index=0;
	Data_Line=0;
	//while((ProgramData[Data_Line].LineNum!=0)&&(ProgramData[Data_Line].LineNum!=LineNo)) Data_Line++;
}

//------------------------------------------------------------------------------
int Get_Data_Int(){
    int rtn=0;
    bool IsInt=true;

    // Get our data in string form.
    char *pd=NextData();
    // Make sure it is made of only characters in integers.
    for(int i=0;i<(int)strlen(pd);i++){
        if((!isdigit(pd[i])) &&
           (pd[i]!='.')    &&
           (pd[i]!='-')    &&
           (pd[i]!='+')){

            IsInt=false;
            break;
        }
    }
    if(IsInt){
        // Convert it to an actual int.
        rtn=atoi(pd);
    }else{
        fprintf(stderr,"ERROR: Data item '%s' is not INT!\n",pd);
        exit(2);
    }
    return(rtn);
}

//------------------------------------------------------------------------------
float Get_Data_Float(){
    float rtn=0.0;
    bool IsFloat=true;

    // Get our data in string form.
    char *pd=NextData();
    // Make sure it only has float characters.
    for(int i=0;i<(int)strlen(pd);i++){
        if((!isdigit(pd[i])) &&
           (pd[i]!='^')    &&
           (pd[i]!='e')    &&
           (pd[i]!='.')    &&
           (pd[i]!='-')    &&
           (pd[i]!='+')){

            IsFloat=false;
            break;
        }
    }
    if(IsFloat){
        // Convert the string to an actual float.
        rtn=atof(pd);
    }else{
        fprintf(stderr,"ERROR: Data item '%s' is not FLOAT!\n",pd);
        exit(2);
    }
    return(rtn);
}

//------------------------------------------------------------------------------
char* Get_Data_String(){
    // It is already in string format ... just pass it on.
    return(NextData());
}

//------------------------------------------------------------------------------
// Return a char pointer to a string of 'spaces' blanks.
//------------------------------------------------------------------------------
char *tabbuf="                                                          ";
char* TAB(int spaces){
    int len=strlen(tabbuf);
    char *rtn=NULL;
    if(spaces<len){
        rtn=tabbuf+len-spaces;
    }
    return(rtn);
}

//------------------------------------------------------------------------------
float LOG(float num){
    return(log(num));
}

//------------------------------------------------------------------------------
float SQR(float num){
    return(sqrt(num));
}

//------------------------------------------------------------------------------
float ATN(float num){
    return(atan(num));
}

//------------------------------------------------------------------------------
float FPower(float num,float exp){
    return(pow(num,exp));
}

//------------------------------------------------------------------------------
int IPower(float num,float exp){
    return((int)pow(num,exp));
}

//------------------------------------------------------------------------------
int INT(float num){
    return(num);
}

//------------------------------------------------------------------------------
int VAL(char* str){
	char* pstr=str;
	while((*pstr==' ')||(*pstr=='\t')||(*pstr=='\n')) pstr++;
	int rtn=atoi(pstr);
    return(rtn);
}

//------------------------------------------------------------------------------
void ClearScreen(int Type){
	switch(Type){
		// Clear the Text and Graphics off screen.
		case 0:  
			fprintf(stdout,"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		// Clear the Text off screen.
		case 2:
			fprintf(stdout,"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		// Clear the graphics.
		default:
			break;
	}
}

//------------------------------------------------------------------------------
// Returns random number [0.0 - 1.0) (ie. 0 to 0.99999999)
float RND(){
    int rn=rand()%1000;
    float rtn=(float)rn/1000.0;
    //printf("NOTE: RND()=%f  rn=%d\n",rtn,rn);
    return(rtn);
}
#pragma argsused
float RND(int flag){
    return(RND());
}

//------------------------------------------------------------------------------
char* StringCat(char* str1, char* str2)
{
	char* rtn=GLB_StrCatBuf;
	static char backbuf[LINE_BUFFER];

	if((str1==GLB_StrCatBuf)&&(str2==GLB_StrCatBuf)){
		fprintf(stderr,"ERROR: Cannot StringCat two arguments that are StringCats!\n");
		exit(1);
	}else if(str1==GLB_StrCatBuf){
		strcat(GLB_StrCatBuf,str2);
	}else if(str2==GLB_StrCatBuf){
		strcpy(backbuf,str2);
		strcpy(GLB_StrCatBuf,str1);
		strcat(GLB_StrCatBuf,backbuf);
	}else{
		strcpy(GLB_StrCatBuf,str1);
		strcat(GLB_StrCatBuf,str2);
	}
	return(rtn);
}

//------------------------------------------------------------------------------
char *LEFT(char *str,int n){
    static char buf[500];
	char* rtn=NULL;

	if((n<0)||(n>255)){
		fprintf(stderr,"ERROR: LEFT$(str,n), n=%d has to be [0,255]\n",n);
		exit(1);
	}else if(n>0){
		n=min(n,(int)strlen(str));
		
		memset(buf,0,500);
		strncpy(buf,str,n);
		rtn=buf;
	}
    return(rtn);
}
//------------------------------------------------------------------------------
char *RIGHT(char *str,int n){
    static char buf[500];
	char* rtn=NULL;

	if((n<0)||(n>255)){
		fprintf(stderr,"ERROR: RIGHT$(str,n), n=%d has to be [0,255]\n",n);
		exit(1);
	}else if(n>0){
		int len=(int)strlen(str);
		n=min(n,len);
		
		memset(buf,0,500);
		strncpy(buf,str,len-n);
		rtn=buf;
	}
    return(rtn);
}
//------------------------------------------------------------------------------
char *MID(char* instr, int start, int len=99999)
{	
    // This static buffer array is still allocated/accessible after routine exit.
    // We use a static index to index into the next buffer on entry so successive
    // calls don't interfere with each other.
	static char buf[10][LINE_BUFFER];
    static int bufidx = -1;

    bufidx++;
    if(bufidx>=10) bufidx=0;

	char *rtn=NULL;
	int islen=strlen(instr);
    start--; // Basic strings are 1-based whereas C-strings are 0-based.

	// Error if 
	if((start<0)||(start>255)||
	   (len<0)||(len>255)||
	   (instr==NULL)) {
		fprintf(stderr,"MID(%s,%d,%d): Illegal function call error\n",instr,start,len);
		exit(1);

	}else if((len>0)&&(start<islen)){
		// Get the string up to the end of the input string but no further.
		len=min(len, islen-start);
		// Set out output buffer and copy in the string segment.
		memset(buf[bufidx],0,LINE_BUFFER);
		memcpy(buf[bufidx],instr+start,len);
		// Return a pointer to the buffer.
		//fprintf(stderr,"WARNING MID(instr=\"%s\",start=%d,len=%d)='%s'\n",instr,start,len,buf[bufidx]);
		rtn=buf[bufidx];
	}else{
		//fprintf(stderr,"WARNING MID(instr=\"%s\",start=%d,len=%d)\n",instr,start,len);
		// Return NULL if len==0 OR start>strlen(instr).
        rtn="";
	}
	return(rtn);
}
//------------------------------------------------------------------------------
char *CHR(int chr){
    static char buf[2];
    buf[0]=(char)chr;
    buf[1]=0;
    return(buf);
}

//------------------------------------------------------------------------------
int SGN(float val){
    if(val==0){
        return(0);
    }else{
        return(val/fabs(val));
    }
}

// Return single precision number for argument.
float CSNG(double val){
    return(val);
}
//------------------------------------------------------------------------------
float SIN(float radians){
    return(sin(radians));
}

//------------------------------------------------------------------------------
float COS(float radians){
    return(cos(radians));
}

//------------------------------------------------------------------------------
float TAN(float radians){
    return(tan(radians));
}

//------------------------------------------------------------------------------
int IT(int val){
    return(val);
}

//------------------------------------------------------------------------------
float FT(float val){
    return(val);
}

//------------------------------------------------------------------------------
char* ST(char* val){
    return(val);
}

//------------------------------------------------------------------------------
int INSTR(int n,char* x,char* y){
	int rtn=-1;

	if(x==NULL){
		rtn=0;
	}else if(y==NULL){
		rtn=n;
	}else if(n==0){
		fprintf(stderr,"INSTR: Illegal argument, n=%d.\n",n);
	}else if((n<=0)||(n>=255)){
		fprintf(stderr,"INSTR: Illegal Function Call, n=%d.\n",n);
	}else if(n>(int)strlen(x)){
		rtn=0;
	}else{
		rtn=(int)(strstr(x,y)-x);
	}
	return(rtn);
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int INSTR(char* x,char* y){
	int rtn=INSTR(1,x,y);
	return(rtn);
}


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int LEN(char* str) {
	return(strlen(str));
}


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
char* ClockStr(){
    // TODO: Make this routine return an actual time string HH:MM:SS
    return(strdup("15:36:24"));
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
char* SPACE(int len){
    char* spaces=(char*)malloc(len+1);
    memset(spaces,' ',len);
    return(spaces); 
}

//------------------------------------------------------------------------------
// Convert a PRINT USING <format-string> to printf-format
//------------------------------------------------------------------------------
char* FixUsingFmt(char* Fmt,bool IsImage){
    static char buf[LINE_BUFFER],tmpbuf[50];
    char *ps=buf;
    int width=0,prec=0,lwidth=0;
    bool decimal=false, innum=false, instring=false,inlstr=false,leftjust=false;

    memset(tmpbuf,0,50);
    memset(buf,0,LINE_BUFFER);

    // If it is a double quoted string get rid of the quotes.
    int beg=0;
    int fin=strlen(Fmt);
    if(Fmt[0]=='"'){
        beg += 1;
    }
    if(Fmt[fin-1]=='"'){
        fin -= 1;
    }

    for(int i=beg;i<fin;i++){
        switch(Fmt[i]){
            case '.':
                if(innum){
                    decimal=true;
                    width++;
                }else{
                    *ps++=tolower(Fmt[i]);
                }
                break;
            case '\'':
                inlstr=true;
                lwidth=0;
                break;
            case 'l':
            case 'L':
                if(inlstr){
                    leftjust=true;
                    lwidth++;
                }else{
                    *ps++=tolower(Fmt[i]);
                }
                break;
            case 'r':
            case 'R':
                if(inlstr){
                    leftjust=false;
                    lwidth++;
                }else{
                    *ps++=tolower(Fmt[i]);
                }
                break;
            case ' ':
                if(innum){
                    if(prec>0){
                        sprintf(tmpbuf,"%%%d.%dd",width,prec);
                    }else{
                        sprintf(tmpbuf,"%%%dd",width);
                    }
                    strcat(buf,tmpbuf);
                    innum=false;
                    width=0;
                    prec=0;
                    decimal=false;
                    ps=buf+strlen(buf);

                }else if(inlstr){
                    strcpy(tmpbuf,"%");
                    if(leftjust) strcat(tmpbuf,"-");
                    strcat(buf,tmpbuf);

                    sprintf(tmpbuf,"%ds",lwidth);
                    strcat(buf,tmpbuf);
                    inlstr=false;
                    lwidth=0;
                    ps=buf+strlen(buf);
                }
                if(instring){
                    width++;
                }else{
                    *ps++=' ';
                }
                break;
            case '\\':
                if(instring){
                    instring=false;
                    sprintf(tmpbuf,"%%%d",width);
                    strcat(buf,tmpbuf);
                    width=0;
                }else{
                    instring=true;
                    width++;
                }
                break;
            case '+':
            case '-':
            case '#':
                innum=true;
                if(decimal) prec++;
                width++;
                break;
            default:
                *ps++=tolower(Fmt[i]);
                break;
        }
    }
    if(innum){
        if(prec>0){
            sprintf(tmpbuf,"%%%d.%dd",width,prec);
        }else{
            sprintf(tmpbuf,"%%%dd",width);
        }
        strcat(buf,tmpbuf);
        innum=false;
        width=0;
        prec=0;
        decimal=false;
        ps=buf+strlen(buf);
    }else if(inlstr){
        strcpy(tmpbuf,"%");
        if(leftjust) strcat(tmpbuf,"-");
        strcat(buf,tmpbuf);

        sprintf(tmpbuf,"%ds",lwidth);
        strcat(buf,tmpbuf);
        inlstr=false;
        lwidth=0;
        ps=buf+strlen(buf);
    }
    return(buf);
}

char* b2c_ConvertUsingFormatStr(char* fmt)
{
    return(FixUsingFmt(fmt,true));
}

void RANDOMIZE(bool prompt=false)
{
    if(prompt){
        char ranbuf[20];
        fprintf(stdout,"Random number seed (-32768 to 32767)? ");
        if(fgets(ranbuf,9,stdin)!=nullptr){
            int seed=atoi(ranbuf);
            srand(seed);
        }
    }else{
        srand(time(NULL));
    }
}

#define POOLSZ        300000  // The amount of space for all the strings in the program.
#define POOLMARGINSZ    20  // The margin of space for each allocated string to allow for writing.


typedef struct CHUNK {
    struct CHUNK* next;
    int           chunksz;
}tChunkHdr;

static tChunkHdr* pool = nullptr;        // This always points to the allocated memory.
static tChunkHdr* freePool = nullptr;    // This points to the first free-space in the sorted chain of free spaces in pool.
static tChunkHdr* usedPool = nullptr;    // This points to the first used-space in the sorted chain of free spaces in pool.

void dump_mem_table()
{
    tChunkHdr* ch = nullptr;
    int i=0;

    fprintf(stderr,"Memory table dump:\n");
    fprintf(stderr,"  Global Variables:\n");
    fprintf(stderr,"    pool      = 0x%08lx\n",(addr)pool);
    fprintf(stderr,"    freePool  = 0x%08lx\n",(addr)freePool);
    fprintf(stderr,"    usedPool  = 0x%08lx\n",(addr)usedPool);
    
    fprintf(stderr,"  Free Chunks:\n");
    ch = freePool;
    i=0;
    while((ch!=nullptr)&&(i<100)){
        fprintf(stderr,"    %3d) 0x%08lx: next=0x%08lx sz=%d str='%s'\n",i,(addr)ch,(addr)ch->next,ch->chunksz,((char*)ch) + sizeof(tChunkHdr));
        ch=ch->next; i++;
    }
    if(i==100) exit(2);
    fprintf(stderr,"\n");

    fprintf(stderr,"  Used Chunks:\n");
    ch = usedPool;
    i=0;
    while((ch!=nullptr)&&(i<100)){
        fprintf(stderr,"    %3d) 0x%08lx: next=0x%08lx sz=%d str='%s'\n",i,(addr)ch,(addr)ch->next,ch->chunksz,((char*)ch) + sizeof(tChunkHdr));
        ch=ch->next; i++;
    }
    if(i==100) exit(3);
    fprintf(stderr,"\n");
}

void dealloc_space(char* str)
{
    if((str>=(char*)pool)&&(str<=((char*)pool+POOLSZ))){
        // Figure out the address of the chunk this string is from.
        tChunkHdr* ch=(tChunkHdr*)(str - sizeof(tChunkHdr));
        // If the chunk ch is the first chunk in the used pool...
        if(usedPool==ch){
            // Removed it from the used pool
            usedPool = ch->next;
            // And insert it into the free pool
            ch->next=freePool;
            freePool=ch;
        }else{
            // Find the chunk before the ch chunk.
            tChunkHdr* uch=usedPool;
            while((uch!=nullptr)&&(uch->next!=ch)) uch=uch->next;

            // Found the previous chunk now snip ch out of the used pool
            if(uch->next==ch){
                uch->next=ch->next;
                //..and insert it into the free pool
                ch->next=freePool;
                freePool=ch;
            }
        }
    }
}

tChunkHdr* alloc_space(int allocsz)
{
    tChunkHdr* rtn=nullptr;

    // Requested chunk needs to be big enough for the string(+POOLMARINSZ) and the size
    // of the current chunk header as well as a new one.  Round up size to nearest int.
    int reqchunksz=((allocsz+POOLMARGINSZ+sizeof(tChunkHdr)+4)/4)*4;

    // If the free pointer hasn't been set we need to init it.
    if(freePool==nullptr){
        // Allocate a header record and all the space to the first free chunk.
        freePool=pool;
        freePool->next=(tChunkHdr*)nullptr;
        freePool->chunksz=POOLSZ-sizeof(tChunkHdr);
    }
    int oldchunksz=((tChunkHdr*)freePool)->chunksz;

    // Find the first free chunk with enough space    
    tChunkHdr* chunk=freePool;
    while((chunk!=nullptr)&&(chunk->chunksz<reqchunksz)) chunk=chunk->next;

   
    // Check to see if we found a chunk 
    if(chunk!=nullptr){
        // Save the remainder of the freelist to tail
        tChunkHdr* tail=chunk->next;
        // chunk is now part of usedpool 
        chunk->next=usedPool;
        chunk->chunksz=allocsz+POOLMARGINSZ;
 
        // Make the freepool point to the second half of the chunk 'chunk'
        freePool=(tChunkHdr*)((char*)chunk + (reqchunksz - sizeof(tChunkHdr)));
        freePool->next=tail;
        freePool->chunksz=oldchunksz-reqchunksz;
        
        // Insert the newly allocted space to the usedPool
        usedPool=chunk;
        fprintf(stderr,"alloc_space(%d)\n",allocsz);
    }
    return(chunk);
}

void init_string_space()
{
    // Allocate the pool if it is missing
    if(pool==nullptr){
        pool=(tChunkHdr*)malloc(POOLSZ);
        freePool=pool;
        freePool->next=nullptr;
        freePool->chunksz=POOLSZ-sizeof(tChunkHdr);
    }
}

void COPY_STRING(char** postr,const char* str)
{
    // Make sure system is setup
    init_string_space();

    // If the old string is the same as the new do nothing, otherwise,
    // allocate and copy 'str' into *postr.
    if((*postr==nullptr)||(strcmp(*postr,str)!=0)){
        if(*postr!=nullptr) dealloc_space(*postr);
        // Get a chunk of space.
        int sz=strlen(str);
        tChunkHdr* chunk=alloc_space(sz+1);
        if(chunk!=nullptr){
            *postr=((char*)chunk+sizeof(tChunkHdr));
            strncpy(*postr,str,sz+1);
        }else{
            fprintf(stderr,"ERROR: chunk==nullptr\n");
            exit(4);
        }
        fprintf(stderr,"COPY_STRING(*postr='%s',str='%s')\n",*postr,str);
        dump_mem_table();
    }
}

int MIN(int x, int y)
{
    int rtn=x;
    if(y<x) rtn=y;
    return rtn; 
}

int MAX(int x, int y)
{
    int rtn=x;
    if(y>x) rtn=y;
    return rtn; 
}

float MIN(float x, float y)
{
    float rtn=x;
    if(y<x) rtn=y;
    return rtn; 
}

float MAX(float x, float y)
{
    float rtn=x;
    if(y>x) rtn=y;
    return rtn; 
}

double MIN(double x, double y)
{
    double rtn=x;
    if(y<x) rtn=y;
    return rtn; 
}

double MAX(double x, double y)
{
    double rtn=x;
    if(y>x) rtn=y;
    return rtn; 
}

char* instr(FILE* fh)
{
    char inpbuf[LINE_BUFFER+1], *ps;
    memset(inpbuf,0,LINE_BUFFER+1);
    if(fgets(inpbuf,LINE_BUFFER,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }
    return(strdup(inpbuf));
};

#endif

/*
 * This function will get stuff from the terminal with some minor 
 * editing capability and a flag (echoeol) to indicate whether the 
 * EOL(whatever it might be) should be echoed.
 *
 * This routine will return a pointer to the local buffer.  If this
 * string is needed after this function is called again it should
 * be duplicated with strdup() or something similar.
 *
 * NOTE: This function has been tested on a linux system and will
 *       have to be modified if used on some other OS. See the system() calls.
 * NOTE: This function only works on stdin.
 */
char getUserStrBuf[LINE_BUFFER+1];

int getUserString(char** instr,bool echoeol)
{
    // fh - File handle for input stream
    // echoeol - Flag indicating whether we echo the users EOL character(s)

    system("stty raw");
    system("stty -echo");

    // This function just takes care of reading in the user's input into a input buffer
    // with minor editing functions like BS and arrow keys.  This will allow for
    // overwriting various points in the user input and erasing characters.
    memset(getUserStrBuf,0,LINE_BUFFER+1);

    char* pe=getUserStrBuf; // This is the pointer to the current edit point.
    int chr;
    while((chr=getchar())!=EOF){
        //fprintf(stderr,"chr=0x%02x\n",chr);
        if(chr==0x03){
            // If user hit Ctrl-C then exit out immediately with no string
            putchar('\r');
            putchar('\n');
            system("stty echo");
            system("stty cooked");
            exit(1);

        }else if((chr=='\n')||(chr=='\r')||(chr==0x04)||(chr==0x1A)){
            // We got some sort of EOL character (0x04=ctrl-D,0x1a=ctrl-z), so...

            // Move the cursor to the end-of-input so the display of the
            // full line doesn't get occluded by any subsequent output.
            while(*pe!='\0'){
                fputc(0x1b,stdout); fputc(0x5b,stdout); fputc(0x43,stdout);
                pe++;
            }
            // Output both the carriage-return(\r) and the newline(\n) if requested.
            if(echoeol){
                putchar('\r');
                putchar('\n');
            }
            //fprintf(stderr,"Got eol\n");
            break;
        }else{
            switch(chr){
                case 0x7f: // BS
                case 0x08: // BS    
                    {
                        // Backspace only works on the end of the line.
                        if((*pe=='\0')&&(pe>getUserStrBuf)){
                            *(--pe)='\0';
                            fputc(0x1b,stdout); fputc(0x5b,stdout); fputc(0x44,stdout);
                            fputc(' ',stdout);
                            fputc(0x1b,stdout); fputc(0x5b,stdout); fputc(0x44,stdout);
                        }
                    }
                    break;
                case 0x1b: // Got the start of an escape sequence (we use cursor movement)
                    {
                        char chr1=getchar();
                        char chr2=getchar();
                        if((chr1==0x5b)&&(chr2==0x44)){
                            // Got a left arrow
                            if(pe>getUserStrBuf){
                                --pe;
                                fputc(0x1b,stdout); fputc(0x5b,stdout); fputc(0x44,stdout);
                            }
                        }else if((chr1==0x5b)&&(chr2==0x43)){
                            // Got a right arrow
                            if(*pe!='\0'){
                                pe++;
                                fputc(0x1b,stdout); fputc(0x5b,stdout); fputc(0x43,stdout);
                            }
                        }else{
                            // We got some other escape sequence which we don't handle
                        }
                    }    
                    break;
                default:
                    *pe++ = chr;
                    //*(++pe)='\0';
                    fputc(chr,stdout);
                    break;
            }
        }
        //fprintf(stderr,"buf='%s' chr='%c' pe=0x%08lx\n",getUserStrBuf,chr,(unsigned long)pe);
    }
    system("stty echo");
    system("stty cooked");

    *instr=getUserStrBuf;
    return(0);
}
   
//-------------------- 
bool b2c_chkerr(const char* fname,void* parg,char** args,int argno)
{
    if(parg==nullptr){
        fprintf(stderr,"ERROR: parg argument is nullptr in %s",fname);
        return(true);
    }
    if(args==nullptr){
        fprintf(stderr,"ERROR: args argument is nullptr in %s",fname);
        return(true);
    }
    if(args[argno]==nullptr){
        fprintf(stderr,"ERROR: Argument %d missing in %s",argno,fname);
        return(true);
    }
    return(false);
}

bool b2c_strtoi(int* parg,char** args,int argno)
{
    bool iserror=false;

    if(b2c_chkerr(__FUNCTION__,parg,args,argno)) return(true);

    char* endptr=nullptr;
    *parg = (int)strtol(args[argno],&endptr,10);
    if(*endptr!='\0'){
        fprintf(stdout,"ERROR: Argument %d is not a integer\n",argno);
        *parg = 0;
        iserror=true;
    }
    return(iserror);
}    

bool b2c_strtof(float* parg,char** args,int argno)
{
    bool iserror=false;

    if(b2c_chkerr(__FUNCTION__,parg,args,argno)) return(true);

    char* endptr=nullptr;
    *parg = strtof(args[argno],&endptr);
    if(*endptr!='\0'){
        fprintf(stdout,"ERROR: Argument %d is not a float\n",argno);
        *parg = 0.0;
        iserror=true;
    }
    return(iserror);
}    

bool b2c_strtod(double* parg,char** args,int argno)
{
    bool iserror=false;

    if(b2c_chkerr(__FUNCTION__,parg,args,argno)) return(true);

    char* endptr=nullptr;
    *parg = strtod(args[argno],&endptr);
    if(*endptr!='\0'){
        fprintf(stdout,"ERROR: Argument %d is not a double\n",argno);
        *parg = 0.0;
        iserror=true;
    }
    return(iserror);
}    

bool b2c_strtos(char** parg,char** args,int argno)
{
    if(b2c_chkerr(__FUNCTION__,parg,args,argno)) return(true);

    *parg = strdup(args[argno]);
    return(false);
}    


int splitStr2Args(char** args,char* instr,int nov,bool echoeol)
{
    //fprintf(stderr,"splitStr2Args(args,instr='%s',nov=%d\n",instr,nov);
    char* ps=instr;
    int err=0;

    int argidx=0; 
    while(*ps==' ') *(ps++)='\0'; // Get rid of leading whitespace
    args[argidx++]=ps; 
 
    bool indqstr=false; 
    char chr; 
    while((chr=(*ps))!='\0'){
        //fprintf(stderr,"buf='%s'\n",ps);
        //for(int i=0;i<nov;i++) fprintf(stderr,"  args[%d]='%s'\n",i,args[i]);
        switch(chr){
            case ',':
                if(!indqstr){
                    *ps=0;                   // Terminate previous argument
                }
                while(*ps==' ') { *(ps++)='\0';ps--; }; // Get rid of leading whitespace 
                args[argidx++]=ps+1;
                break;

            case '"':
                if(indqstr){
                    if(*(ps+1)=='"'){
                        // We have two double-quotes together so insert a real double quote
                        char* pe=ps;
                        while(*pe!=0) *pe=*(pe+1); // Shift rest of inp str down 1 to fill gap of "
                    }else{
                        *ps='\0';
                        indqstr=false;
                    }
                }else{
                    // We found the start-" of a double-quoted string.
                    *ps='\0';
                    args[argidx-1]=ps+1;
                    indqstr=true;
                }
                break;

            default:
                // Don't do anything special for normal characters.
                break;

        }
        ps++;
    }
    if((argidx>=1)&&(argidx<nov)){
        fprintf(stdout,"%sERROR: Number of arguments is %d should be %d.\n",
            (echoeol)?"":"\n",argidx-1,nov);
        args=nullptr;
        err=0x10;
    }
    return(err);
    
}
    

int input(char** args,int nov,bool echoeol)
{
    // args - This is a pointer to an array of char* args (preallocated)
    // nov - Number-of-Variables
    // nortn - Flag indicating if we echo the carriage return.

    // Clean out the character pointer vector to store the return strings.
    memset(args,0,sizeof(char*)*nov);

    int err=0;
    char* instr;    // Pointer to user input string
    err += getUserString(&instr,echoeol);
    //fprintf(stderr,"getUserString('%s',%s)=%d\n",instr,(echoeol)?"True":"False",err);
    if(!err){
        err += splitStr2Args(args,instr,nov,echoeol);
        //fprintf(stderr,"splitStr2Args(args,'%s',%d)=%d\n",instr,nov,err);
        //for(int a=0;a<nov;a++){
        //    fprintf(stderr,"  args[%d]='%s'\n",a,args[a]);
        //}
    }

    return(err);
}    

/*
 * This is just a make-do function until a better solution occurs.
 * 
 * TODO: One possible solution is to remove the extension from the progname
 *       lowercase it and then search through the directory to see if there
 *       any executables whose lowercase version is identical to our program
 *       name then execute the.  Maybe with permission first.
 */
void b2c_chain(char* progname,int progline)
{
    int err=0;
    fprintf(stdout,"Chaining to %s:%d\n",progname,progline);
    //execl(progname,"",nullptr);
    switch(errno){
        case EACCES:	fprintf(stderr,"CHAIN: Permission denied.\n"); break;
        case EMFILE:	fprintf(stderr,"CHAIN: Too many open files.\n"); break;
        case ENOENT:	fprintf(stderr,"CHAIN: Path or file name not found.\n"); break;
        case ENOEXEC:	fprintf(stderr,"CHAIN: Exec format error.\n"); break;
        case ENOMEM:	fprintf(stderr,"CHAIN: Not enough memory.\n"); break;
        default:	    fprintf(stderr,"CHAIN: Unknown error.\n"); break;
    };
    exit(0);
}

#endif //IntrinsicsH
//------------------------------------------------------------------------------
// End of intrinsics.h
//------------------------------------------------------------------------------
