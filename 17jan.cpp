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
    int a[50][50],i,j,row,col; 
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