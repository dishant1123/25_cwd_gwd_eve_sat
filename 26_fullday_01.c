/*
structure  : diff data type  store . 

struct student
{
    int rollno; 
    string  name; 
}s[3];

*/
/*
#include <stdio.h>
struct student
{
    int rollno; 
    char  name[20];
}s[3];
int main()
{
    //struct  student s[3];
    
    int i;
    for(i=0;i<3;i++)   // scanf("%d",&a[i])
    {
        printf("enter the  rollno : "); 
        scanf("%d",&s[i].rollno);
        printf("enter the name : ");
        scanf("%s",s[i].name);
    } 
    printf("rollno\tname\n");
    for(i=0;i<3; i++)
    {
        printf("%d\t%s\n",s[i].rollno,s[i].name);
    }
    return 0; 
}
*/ 
/*
task :1 bank  

srno   name  accno    balance 
1      john   1234     1000
2      merry  1456     250
3      vivan  1189     600
4      priyal 4455     3000 

condition  : 
1. print only those name  who's  balance is  less than 500. 
    output  :  name 
               merry 
2. if  balance is  more than 500 then  add 1000 in balance  and  print  name  with  update balance. 
    output  :  name  balance
               vivan  1600
               john   2000
               priyal 4000

*/

// struct with pointer  : 
/*
#include <stdio.h>
struct student 
{
    int rollno;
    char name[20]; 
};

// int  a=10 ;  int *p  =a   ==> pointer decalration  p =&a 

int main()
{
    struct student s1={1,"john"};

    struct student *p1;
    p1=&s1; 
    
    printf("rollno : %d",p1->rollno); // -> arrow  for  pointer
    printf("name : %s",p1->name); 
    return 0; 
}
*/

// ex :3  structure with pointer +array   bank  :

/*
#include <stdio.h>
struct bank
{
    int acno,srno; 
    char name[20]; 
    int  balance; 
};

int main()
{
    struct bank b[3]; 
    struct bank *p =b;  // p1= &s   
    
    printf("enter the customer name  acno  and balance  : \n"); 

    for(int i=0; i<3; i++)
    {
           printf("enter the sr no : "); 
           scanf("%d",&p[i].srno);
           printf("enter the ac no : ");
           scanf("%d",&p[i].acno);
           printf("enter the balance : ");
           scanf("%d",&p[i].balance);
           printf("enter the name : ");
           scanf("%s",p[i].name);
    }

    printf("balance less than  500 : \n");

    for(int i=0; i<3; i++)
    {
        if(p[i].balance < 500)
        {
            printf("%s\n",p[i].name);
        }
    }   

    printf("balance more than  500  update  balance  with name: \n");

    for(int i=0; i<3; i++)
    {
        if(p[i].balance > 500)
        {
            p[i].balance +=1000;  // p[i].balance = p[i].balance +1000; 
            printf("%s\t%d\n",p[i].name,p[i].balance);
        }
    }   
    return 0; 

}

*/ 

/*
1. call  by value  :
2. call  by reference  :
*/

// ex : 1 call by value  : 
/*
#include <stdio.h>
void swap(int a, int b)
{
    int temp ; 
    temp =a; 
    a =b;
    b= temp; 
    printf(" inside  function  : a value is %d  b value is %d \n",a,b);
}
int  main()
{
        int x=10, y=20; 
        swap(x,y);
        
        printf("after swap  x value is %d  y value is %d \n",x,y);
        return 0 ; 
}
*/ 
/*
ay   153 : a=20 b=10  x=10  y =20 
kh   153 : a=20 b=10  x=10  y =20
mm   
h    
*/

// ex :2 call by reference  :
/*
#include <stdio.h>
void swap(int *a, int *b) // int a = 10   int * p  p = &a 
{
    int temp ; 
    temp =*a; 
    *a =*b;
    *b= temp; 
}
int  main()
{
        int x=10, y=20; 
        swap(&x,&y);
        
        printf("after swap  x value is %d  y value is %d \n",x,y);
        return 0 ; 
}
*/

// double pointer  :

#include <stdio.h>
int  main()
{
    int a=10 ; 
    int *p; 
    p =&a; 

    int **q =p ; 
    // q= &p; 

    printf("a value is  : %d\n",a);  // 10 
    printf("a value using pointer is  : %d\n",*p); // 10 
    
    printf("address of a is : %d\n",p);  // address of  a 

    printf(" value of a is  : %d\n",**q);  //  10 
    printf("address of a is : %d\n",&p);  // address : 

    return 0 ;

}