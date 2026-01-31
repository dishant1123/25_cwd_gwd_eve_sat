/*
employeess management  system  : 

1. add 
2. delete 
3. update  
4. search 
5. display  

use   => array  +function  

ex : 

id    name  salary 
1      ram    90000 
2      sita   80000    ===> 2 
*/

#include<iostream>
using  namespace std; 
const int size =100; 

int  empid[size]; 
string empname[size];
int  empsalary[size]; 
int  countemp =0 ; 

void  addemp() 
{
    cout<<"enter the employee id : ";
    cin>>empid[countemp];  
    cout<<"enter the employee name : ";
    cin>>empname[countemp];
    cout<<"enter the employee salary : ";
    cin>>empsalary[countemp];
    countemp++;
    cout<<"employee added successfully"<<endl;
}
void  delemp()
{

} 
void  updateemp()
{
    int  id,found =0;
    cout<<"enter the employee id : ";
    cin>>id; 
    for(int  i=0 ; i<=countemp; i++)
    {
        if(id == empid[i])
        {
            cout<<"enter the employee new name : ";
            cin>>empname[i];
            cout<<"enter the employee new salary : ";
            cin>>empsalary[i];
            cout<<"employee updated successfully"<<endl;
            found =1; 
            break;
        }
    }
    if(found ==0)
    {
        cout<<"employee not found"<<endl;
    }
}
void  searchemp()
{
    int id, found =0 ; 
    cout<<"enter the employee id you want  to  search : ";
    cin>>id; 
    for(int  i=0; i<=countemp; i++)
    {
            if(id == empid[i])
            {
                cout<<"name : "<<empname[i]<<endl;
                cout<<"salary : "<<empsalary[i]<<endl;
                found =1; 
                break;
            }
    }
    if (found ==0)
    {
        cout<<"employee not found"<<endl;
    }
}
void  displayemp()
{

}
int main()
{
    int  choice;
    do{
        cout<<"EMP MANAGEMENT SYSTEM"<<endl;
        cout<<"1.addemp"<<endl;
        cout<<"2.delemp"<<endl;
        cout<<"3.updateemp"<<endl;
        cout<<"4.searchemp"<<endl;
        cout<<"5.displayemp"<<endl;
        cout<<"6.exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: 
                addemp(); 
                break;
            case 2:
                delemp();
                break;
            case 3:
                updateemp();
                break;
            case 4:
                searchemp();
                break;
            case 5:
                displayemp();
                break;
            case 6 :
                cout<<"bye bye"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
                break;
        }
    }while(choice !=6); 
    return 0; 
}
