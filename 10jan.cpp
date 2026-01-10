/*
array sort :

1. bubble  sort 
2. selection sort
3. insertion sort

int a[5] ={1,6,2,5,3}; 
for(i=0) 
    for(j=i+1)
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a[50], num, i,j,temp; 
    cout<<"enter the number of elements"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before  sorting array  is  : "<<endl ; 
    for(i=0; i<num; i++)
    {                      //       a[0]   a[1]  a[2]  a[3]  a[4]
        cout<<a[i]<<" ";  // a[5] = {1,      6,    2,   5,    3}
    }
    cout<<"bubble sort : "<<endl;

    for(i=0; i<num; i++) // i =1   1 < 5 
    {
        for(j=i+1; j<num; j++) //  j =2   2  <5 
        {
            if(a[i] > a[j])// a[i] > a[j]    // a[1] > a[2]  6 > 2  
            {
                temp =a[i];  //  temp=6  
                a[i]=a[j];   // a[1] =a[2]    a[1]=2
                a[j]=temp;  //  a[2]=6    // a[5] = {1,2 ,6,5,3 }
            }
        }
    }
    cout<<"after sorting array  is  : "<<endl ; 
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" "; 

    }
    return 0; 
}
*/

// selection  sort  : 
/*
1.find the minimum element from the unsorted part the array. 
2.swapping it with the first unsorted element.
*/
#include <iostream>
using namespace std;
int main()
{
    int a[50], num, i,j,temp; 
    cout<<"enter the number of elements"<<endl;
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before  sorting array  is  : "<<endl ; 
    for(i=0; i<num; i++)
    {                      //       a[0]   a[1]  a[2]  a[3]  a[4]
        cout<<a[i]<<" ";  // a[5] = {1,      6,    2,   5,    3}
    }
    cout<<"selection sort : "<<endl;

    for(i=0; i<num; i++) // 2  2 < 5 
    {
        int minindex =i;  // minindex = 1 
        for(j=i+1; j<num; j++)// j =5 5   <5 
        {
            if(a[j] < a[minindex])  // if a[4] < a[2]   3 < 2  
            {
                minindex =j;   //  minindex=2
            }
        }
        temp =a[i];  // temp =1 
        a[i]=a[minindex];// a[0] =1
        a[minindex]=temp; // a[0] =1  // a[5] = {1,      2,    6,   5,    3}
    }
    cout<<"after sorting array  is  : "<<endl ;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}
