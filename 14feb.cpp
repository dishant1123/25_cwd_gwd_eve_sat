/*
structure  : 
1. multiple data type  store  . 

*/

// ex :1 
/*
#include <iostream>
using namespace std;
struct bank
{
    string name; 
    int ac_num;
    int balance; 
}b[3];

int main()
{
    int i; 
    for(i=0; i<3; i++)
    {
        cout<<"enter name of customer "<<i+1<<"\n";
        cin>>b[i].name; 
        cout<<"enter account number of customer "<<i+1<<"\n";
        cin>>b[i].ac_num;
        cout<<"enter balance of customer "<<i+1<<"\n";
        cin>>b[i].balance;
    }
    cout<<"name\taccount number\tbalance\n";
    for(i=0; i<3; i++)
    {
        cout<<b[i].name<<"\t"<<b[i].ac_num<<"\t"<<b[i].balance<<"\n";
    }
    return 0; 

}
/*
name   acnum   balance 
ram     1234     900
sita    2435     400
ravan   3577     200

task :1  print only those  cutomer name  whose balance is less than 500. 
        output  : sita  ravan

task :2  if cutomer balance more than 500  then added 1000 rs in thier balance and  print updated balance  with name.   

        name   updated_balance 
        ram     1900
using  structure  with  function  
*/

// ex :2 

// structure  with function  : 
/*
#include <iostream>
using  namespace std;
struct bank
{
    string name ;
    int  ac_num; 
    int balance; 
};

void input(bank b[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"enter name of customer "<<i+1<<"\n";
        cin>>b[i].name;
        cout<<"enter account number of customer "<<i+1<<"\n";
        cin>>b[i].ac_num;
        cout<<"enter balance of customer "<<i+1<<"\n";
        cin>>b[i].balance;
    }
}

void show(bank b[], int size)
{
    cout<<"name\taccount number\tbalance\n";
    for(int i=0; i<size; i++)
    {
        cout<<b[i].name<<"\t"<<b[i].ac_num<<"\t"<<b[i].balance<<"\n";
    }
}

int main()
{
    bank b[3]; 

    input(b,3);
    show(b,3); 
    return 0; 
}

// hw : 
/*
movie booking ticket  system  ==> using structure  with array  with function  
*/

// union : 
/*
union  :

1. all members of union share the same memory location . 
2.at a time only  one member can store a value. 
*/
/*
#include <iostream>
using namespace std; 

union student 
{
    int id;
    float marks; 
    char grade;  
};
int main()
{
    union student s; 
    s.id =10; 
    cout<<"id :"<<s.id<<endl;

    s.marks =99;
    cout<<"marks :"<<s.marks<<endl;

    s.grade ='a';
    cout<<"grade :"<<s.grade<<endl;

    cout<<"id :"<<s.id<<endl;
    return 0; 
}
*/ 

// pointer : 

/*
use : 

1. store address of a variable .
2. easily access the array element, and string  though pointer.
*/

// ex :1 
/*
#include <iostream>
using namespace std;
int main()
{
    int a=10 ; 
    int *p; // pointer  decalration  
    p =&a;  // pointer  intialization  // int *p = &a; 

    cout<<"value of a : "<<a<<endl;
    cout<<"using pointer  : "<<*p<<endl;

    cout<<"address of a : "<<p<<endl; // a  address 
    cout<<"address : "<<&p<<endl; 

    return 0; 

}
*/ 

// array  with  pointer : 

/*
int a[5] = {1,2,3,4,5}; 

int *p =a;  // why ?   normal  : int *p =&a; 
*/

#include <iostream>
using namespace std;
int main()
{
    int a[5] ={1,2,3,4,5}; 
    int *p =a; 
    
    cout<<"value of a[0] : "<< *p<<endl;//a[0]<<endl;
    cout<<"value of a[1] :"<<*(p+1)<<endl;//a[1]<<endl; 
 
    cout<<"value of a[1] :"<<(p+1)<<endl;//a[1]<<endl; 

    return 0;
}