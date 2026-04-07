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
/*
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
*/ 
/*
Write a function display_oddLines() to display odd number lines from the text file. Consider the following lines for the file – friends.txt.

Friends are crazy, Friends are naughty !
Friends are honest, Friends are  best !
Friends are like keygen, friends are like license key !
We are nothing without friends, Life is not possible without friends !
*/

// soultion  : 
/*
#include <stdio.h>
int main()
{
    FILE *fp;
    fp =fopen("friends.txt","r");

    char line[500];
    int line_no = 1;
    
    if(fp == NULL)
    {
        printf("file not found\n");
        return 0; 
    }
    while(fgets(line,sizeof(line),fp) != NULL)
    {
        if(line_no %2 != 0)
        {
            printf("%s",line);
        }
        line_no++; 
    }
    return 0; 
}
*/

/*
read +   : read + write  both  ==> exiting  
write +  : read +write  both  + new create   ==> exiting  ==> overwrite
append + read +write  both  + new create   ==> exiting  ==> append


*/

// ex :1 

#include <stdio.h>
int main()
{
    FILE *fp;
    fp =fopen("friends.txt","r+");
    char line[500];
    if(fp == NULL)
    {
        printf("file not found\n");
        return 0;
    }
   
    fputs("\nmy name is aaryan.",fp);

    rewind(fp); // goback to the start of file
    
    while (fgets(line,sizeof(line),fp)!= NULL)
    {
            printf("%s",line);
    }
    
    fclose(fp);
    return 0 ;
}

/*
Write a c  program to reverse the content of a one file and store it in second file and also convert content of second 
file into uppercase and store it in third file and also count number of Vowels in third file and also print only 2nd line from 
the content of third file.
Examples:
If data file one contains the following data:
Friends are crazy, Friends are naughty !
Friends are honest, Friends are  best !

Output 1:
! tseb  era sdneirF ,tsenoh era sdneirF
! ythguan era sdneirF ,yzarc era sdneirF

Output 2:
! TSEB  ERA SDNEIRF ,TSENOH ERA SDNEIRF
! YTHGUAN ERA SDNEIRF ,YZARC ERA SDNEIRF

Output 3:
Vowels = 22

Output 4:
! YTHGUAN ERA SDNEIRF ,YZARC ERA SDNEIRF
*/