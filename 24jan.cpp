/*
function  : 

4 types : 

1.no arg  no return 
2. no arg  with return 
3. with arg  no return 
4. with arg  with return
*/

// no arg  no return : 
/*
#include<iostream>
using namespace std;
void  add()
{
    int  a,b,c; 
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    c=a+b; 
    cout<<"the sum is : "<<c<<endl;
}
int main()
{
    add(); 
    add();
    return 0 ;
}
*/ 
// with arg  no return : 

/*
#include<iostream>
using namespace std;
void  add(int  a, int b=  90 ); 
int main()
{
    add(45,20);
    return 0 ;
}
void add(int  a, int  b )
{
    int  c; 
    c=a+b; 
    cout<<"the sum is : "<<c<<endl;

}
*/ 
// no arg with return : 
/*
#include<iostream>
using namespace std;
int add()
{
    int  a,b,c; 
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    c=a+b;
    return c;  
}
int main()
{
    cout<<add(); 
    return 0; 
}
*/

// with arg  with return : 
/*
#include<iostream>
using namespace std;
int add(int  a, int b )
{
    int  c; 
    c=a+b;
    return c;  
}
int main()
{

    cout<<add(12,78); 
    return 0; 
}
*/ 

/*
ROYAL KID BANK : 
1. create a username  and  password . 
2. verify  the username  and  password with  login function . 
3. after  successful  login  give the balance 25000 rs. 
4 . function  : 
    1. login  : compulsory 
    2. withdraw  : maintain 10000 rs in your account. 
    3. deposit
    4. check balance 

condition  : for  withdraw ==> maintain 10000  rs balance  that  means  
    ex : if  your balance is  30000 and  you want to withdraw  25000  then
        it is  invalid  beacuse  you  have  only  5000  rs  left  in  your so 
        you have to maintain  min 10000 rs balance in your  account. 

function  : login  , deposit, withdraw , check balance
*/