/*
matrix : 2 d array  . 

 1 2 3    3*3    ==> 3 row  3  col    (0,0)1  (0,1)2  (0,2)3
 4 5 6                                 (1,0)4  (1,1)5  (1,2)6
 7 8 9                                  (2,0)7  (2,1)8  (2,2)9
*/

// ex :1 
#include<iostream>
using namespace std;
int main()
{
    int a[50][50],i,j,row,col,rowsum,colsum; 
    cout<<"enter the number of rows : ";
    cin>>row;
    cout<<"enter the number of cols : ";
    cin>>col;

    cout<<"enter the elements of the matrix : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix is : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0; i<row; i++) // 1  1 <3 
    {
        rowsum=0;  // 0 
        for(j=0; j<col; j++) // 3  3 <3 
        {
           rowsum = rowsum+a[i][j]; // rowsum = 15 
        }
        cout<<i+1<<"row sum is  : "<<rowsum<<endl; // 6  15 
    }
    for(i=0; i<row; i++) // 0  0 <3 
    {
        colsum=0;  // 0 
        for(j=0; j<col; j++) //2  2  <3 
        {
           colsum = colsum+a[j][i]; // colsum = 12
        }
        cout<<i+1<<"col sum is  : "<<colsum<<endl; // 
    }
    return 0; 
}

/*
task :2 
1 2 3 
4 5 6
7 8 9 

first  row sum : 6
second row sum : 15
third row sum : 24
first  col sum : 12
second col sum : 15
third col sum : 18

*/ 

/*
identity  matrix :

original matrix : 

1 2 3 
4 5 6 
7 8 9 

identity matrix :

1 0 0  
0 1 0 
0 0 1
*/