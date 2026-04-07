/*
file  handling  :  txt 
 
1. read   : exiting  file  open  only  
2. write  : new file create  + write  + exiting  file  open  ==> overwrite 
3. append : new file create  + write  + exiting  file  open  ==> add 


fopen ==> file open 
fclose ==> file close
fprintf ==> file  write 
fscanf() ==>read formatted data
fgetc() ==> read single character
fgets() ==> read string
fputc() ==> write  character single
fputs() ==> write string
*/

// ex :1  write   ==> new  file  
/*
#include <stdio.h>
int  main()
{
    FILE *fp; 
    fp = fopen("harsh.txt","w"); 

    if(fp == NULL)
    {
        printf("file not found\n");
        return 0;
    }
    fprintf(fp,"my name is harsh\n");
    fprintf(fp,"study  in royal\n");
    fprintf(fp,"live  in ahmedabad\n");
    fprintf(fp,"favourite food is pizza\n");
    fprintf(fp,"dream to meet  narendra modi\n");

    fclose(fp); 
    return 0; 
}
*/ 
// ex :2  write   ==> exiting  file   ==> overwrite  
/*
#include <stdio.h>
int  main()
{
    FILE *fp; 
    fp = fopen("harsh.txt","w"); 

    if(fp == NULL)
    {
        printf("file not found\n");
        return 0;
    }
    fprintf(fp,"study  in  ganpat university\n");
    fprintf(fp,"cricket lover\n");
    fclose(fp); 
    return 0; 
}
*/ 

// ex :3 append ==> new  file
/*
#include <stdio.h>
int  main()
{
    FILE *fp; 
    fp = fopen("mihir.txt","a"); 

    if(fp == NULL)
    {
        printf("file not found\n");
        return 0;
    }
    fprintf(fp,"my name is  mihir\n");
    fprintf(fp,"study  in  Ahemdabad university\n");
    fprintf(fp,"live  in  ahmedabad\n");
    fprintf(fp,"cricket lover\n");
    fclose(fp); 
    return 0; 
}
*/

// ex :4 append ==> exiting  file ==> add
/*
#include <stdio.h>
int  main()
{
    FILE *fp; 
    fp = fopen("mihir.txt","a"); 

    if(fp == NULL)
    {
        printf("file not found\n");
        return 0;
    }
    fprintf(fp,"dream to  meet  virat kohli\n");
    fprintf(fp,"study in royal.");
    fclose(fp); 
    return 0; 
}

*/ 

// ex :5 read ==> exiting  file ==> read

#include <stdio.h>
int main()
{
    FILE *fp;
    char  ch; 
    fp= fopen("mihir.txt","r");

    if(fp == NULL)
    {
        printf("file not found\n");
        return 0 ;
    }
    while((ch = fgetc(fp))!= EOF)   // eof ==> end  of  file 
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0 ;
}