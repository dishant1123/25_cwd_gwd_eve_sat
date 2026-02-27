/*
employees management system  : using pointer structure function  array 
1. add emp 
2. display emp
3. update emp
4. delete emp
5. search emp
6. exit

*/
#include <iostream>
#include <string>
#define max 100 
using namespace std;

struct emp 
{
    int id; 
    string name;
    int salary; 
};
void add_emp(struct emp *e, int *count)
{
    if(*count >= max)
    {
        cout<<"max employee limit reached"<<endl;
        return; 
    }
    cout<<"enter the employee id : ";
    cin>>e[*count].id; 
    cout<<"enter the employee name  : ";
    cin>>e[*count].name; 
    cout<<"enter the employee salary : ";
    cin>>e[*count].salary; 
    
    *(count)++; 
    cout<<"employee added successfully"<<endl;

}

void search_emp(struct emp *e, int count)
{
    int  id , found =0;
    cout<<"enter the employee id : ";
    cin>>id; 
    for(int i=0; i<count; i++)
    {
        if(e[i].id ==id)
        {
            cout<<"employee name : "<<e[i].name<<endl;
            cout<<"employee salary : "<<e[i].salary<<endl;  
            found =1; 
            break;
        }
    }
    if(found ==0)
    {
        cout<<"employee not found"<<endl;
    }
}
/*

int main()
{
    
}
*/