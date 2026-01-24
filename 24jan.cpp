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
#include<iostream>
#include<string>
using namespace std;

string saveduser, savedpass;
int balance =25000; 

bool login()
{   
    string username, password;
    cout<<"enter the username : ";
    cin>>username;
    cout<<"enter the password : ";
    cin>>password;
    if(username ==saveduser && password ==savedpass)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
void deposit()
{
    int amt; 
    cout<<"enter the amount for deposit : ";
    cin>>amt;
    balance +=amt; 
    cout<<"deposited amount : "<<amt<<endl;
}
void  withdraw()
{
    int  amt; 
    cout<<"enter the amount for withdraw : ";  // 25000   ==>maintain  balance  : 10000 
    cin>>amt; // after  balance =30000
    
    if(balance -amt >=10000) // 30000 -2500 >=10000  
    {
        balance -=amt; 
        cout<<"withdrawed amount : "<<amt<<endl;
    }
    else 
    {
        cout<<"maintian 10000 rs balance in your account"<<endl;
    }
}
void  checkbalance()
{
    cout<<"your balance : "<<balance<<endl;
}

int main()
{
    int  choice; 
    cout<<"ROYAL KID BANK"<<endl;
    cout<<"enter  the  user name  : "; 
    cin>>saveduser;
    cout<<"enter  the  password  : ";
    cin>>savedpass;

    if(!login())
    {
        cout<<"invalid username or password"<<endl;
        return 0;
    }
    cout<<"login successful"<<endl;
    cout<<"login is successful your  intial balance is  : "<<balance<<endl;

    do{
        cout<<"MENU"<<endl;
        cout<<"1.deposit"<<endl;
        cout<<"2.withdraw"<<endl;
        cout<<"3.check balance"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice; 
        switch(choice)
        {
            case 1: 
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkbalance();
                break;
            case 4 :
                cout<<"bye bye"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
                break;
        }

    }while(choice !=4);
    return 0; 
}

/*
task : 
1. give a  login attempt  maximum attempt is  3 times.
2. if  user select  withdraw  option then ask you to enter the  password and also  verify the  password if  it is  correct then  only  withdraw doen  otherwise  not. 

*/