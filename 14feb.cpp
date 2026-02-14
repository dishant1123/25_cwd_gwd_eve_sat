/*
structure  : 
1. multiple data type  store  . 

*/

// ex :1 
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

*/