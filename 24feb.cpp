/*
private , protected :  
*/

// ex :1  by default  private : 

/*
#include <iostream>
using namespace std;
class student 
{
    string  name="suhani" ; 
    int age=19; 
    public : 
        void  show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
}; 
int  main()
{
    student s; 
    // cout<<"name is  : "s.name<<endl; // error : bcz name  age  is  private . 
    // cout<<"age is : "s.age<<endl;
    s.show(); 
    return 0; 
}
*/ 

// ex :2  ==> protected : 
/*
access in subclass , inhertance . 
*/
/*
#include <iostream>
using namespace std;
class student 
{
    protected : 
        string name = "yug";
        int  age =19; 
};
class teacher : public student 
{
    public : 
        void show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};
int main()
{
    teacher t;
    t.show(); 
    return 0; 
}
*/ 

// ex :3 banking system

#include <iostream>
using namespace std;
class bank 
{
    public : 
        string acc_holder_name = "vivan"; 
        int  acc_no = 123456789;
        string branch_name = "HDFC";
        int  balance =30000; 

    void deposit(int amt)
    {
        balance +=amt; 
        cout<<"deposit  amt  is  : "<<amt<<endl;
    }
    void withdraw(int amt) // 10000 rs maintain in your account .
    {
        if(balance - amt >=10000) // 40000 -3500 >=10000 
        {
                balance -=amt;
                cout<<"withdraw  amt  is  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance  require is  :  10000 rs "<<endl;
        }
    }
    void show_balance()
    {
        cout<<"balance is : "<<balance<<endl;
    }
    void show_details()
    {
        cout<<"BANKING DETAILS"<<endl;
        cout<<"BANK NAME : "<<branch_name<<endl;
        cout<<"ACCOUNT HOLDER NAME : "<<acc_holder_name<<endl;
        cout<<"ACCOUNT NO : "<<acc_no<<endl;
        cout<<"BALANCE : "<<balance<<endl;  // intial balance  = 30000 
    }
};

int main()
{
    bank b; 
    b.show_details(); 
    b.deposit(20000); 
    b.withdraw(29000); 
    b.show_balance(); 
    return 0; 
}
/*
task  : 1 balance   ==> private  

task  :2 ask user to enter the  pin  if user deposit  or  withdraw  money  then ask for  pin  and verify the  pin  if it is  correct enter the  pin then  depsoit or  withdraw the money successfully  . in case of  wrong  pin then not deposit or withdraw the money .


*/