/*
array  : 
int  a[5] ={10,20,6,7,8,9}; 

a[0]  ==> 10  a[4]   ==> 0  

*/

// update  : 
/*

int  a[5] = {1,2,3,4,5} ; 

a[2] =100 
after  update  : 

a[5] ={1,2,100,4,5}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a[50],num,i,update,index; 
    cout<<"enter the size of array : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update array element is  : "<<endl;
    for(i=0; i<num; i++)
    {                       //          0  1  2  3  4 
        cout<<a[i]<<endl;    // a[5] = {10,20,30,40,50}
    }
    cout<<"enter the you want to  update : "; 
    cin>>update; // 100 
    cout<<"enter the index of element you want to update : ";
    cin>>index;  //2 
    a[index] =update;    // a[2] = 100 

    cout<<"after update array element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;    // a[5] = {1,2,100,4,5}
    }        
    return 0; 
}
*/ 

// insert : 

/*
int a[5] ={12,14,16,18,20};

insert = 90 
index  / pos = 3 
after insert :  {12,14,16,90,18,20}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a[50],num,i,ins,index; 
    cout<<"enter the size of array : ";
    cin>>num; //5

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update array element is  : "<<endl;
    for(i=0; i<num; i++)
    {                       //          0  1  2  3  4  5 
        cout<<a[i]<<endl;    // a[5] = {10,20,30,90 40,50}
    }
    cout<<"enter the you want to  insert : ";
    cin>>ins;  // 90
    cout<<"enter the index of  : ";
    cin>>index; // 3 
    for(i=num; i>index; i--) // i=3  3 >3
    {
        a[i] =a[i-1]; // a[4] = a[3]
    }
    a[index] =ins;  //  a[3] =90
    num++;
    cout<<"after insert array element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;    // a[5] = {12,14,16,90,18,20}
    }
    return 0; 
}
*/

//delete : 

/*

int a[5] ={12,14,16,18,20};

user  delete  =18 
after  delete :  {12,14,16,20}  

user index : 3 
after  delete :  {12,14,16,20}
*/

#include<iostream>
using namespace std;
int main()
{
    int  a[50],num,i,index,del; 
    cout<<"enter the size of array : ";
    cin>>num; 
    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before delete array element is  : "<<endl;
    for(i=0; i<num; i++)
    {                       //          0  1  2  3  4  
        cout<<a[i]<<endl;    // a[5] = {10,20,30,50}
    }
    cout<<"enter the  index of element you want to delete : ";
    cin>>index; //3
    for(i=index; i<num-1;i++)// i=3  3 < 4 
    {
        a[i] =a[i+1];  // a[3]  =a[4]
    }
    num--; 
    cout<<  "after delete array element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<endl;    // a[5] = {10,20,30,50}
    }
    return 0; 
}

// task  :1 
/*
int a[5] = {10,45,67,23,90} 

user enter the element : 90 
print index number  of  90  : 4 
*/

// duplicate  : 

