/*
matrix mulplication  : 


A  (2,3)         B (3,2) 
1 2 3           7, 8
4 5 6           9 ,10 
                11,12

matrix multiplication  :                    2 *2 matrix  

(1*7) + (2*9) + (3*11)   :  58                58 64  
(1*8) + (2*10) + (3 *12) :  64
*/

#include<iostream>
using namespace std;

int  main()
{
    int a[2][3], b[3][2] , c[2][2]={0};
    cout<<"enter the elements of matrix A : "<<endl;

    for(int  i=0; i<2; i++)
    {
        for(int  j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of matrix B : "<<endl;
    for(int  i=0; i<3; i++)
    {
        for(int  j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"matrix multiplication : "<<endl;
    /*
A  (2,3)         B (3,2) 
1 2 3           7, 8
4 5 6           9 ,10 
                11,12
    */

    for(int i=0; i<2; i++) // i=0  0 < 2   
    {
        for(int j=0; j<2; j++) // j =1   1 <2 
        { 
            for(int  k=0; k<3; k++) // k =0  0 < 3 
            {
                c[i][j] +=a[i][k] * b[k][j]; //  c[0][1] = c[0][1] + a[0][0] * b[0][1] =8
            }
        }
    }
    
    cout<<"result  : "<<endl;
    for(int i =0; i<2; i++)
    {
        for(int  j=0; j<2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
