/*
loop : 

1. for  loop   :  entry  
2. while  loop   :  entry  
3. do while  loop   :  exit  
*/
// prime  perfect amg reverse pelindrome  twin  strong  : 

/*
 prime  : 2 factors:  ==> 6 number  ==>1,2,3,6  ==> not prime  
            19 factors  : 1,19 
 */

 /*
#include<iostream>
using namespace std; 
int main()
{
    int num, count =0 ; 
    cout<<"enter the number : ";
    cin>>num;  ///3 

    for(int i =1; i<=num ; i++) // 3  3   <=3 
    {
        if(num %i==0)  // 3 % 3  == 0 
        {
            count++;  //  count =2  
        }
    }
    if (count ==2) 
    {
        cout<<"prime"<<endl;
    }
    return 0; 
}

*/ 

//perfect : 6 factors : 1,2,3,6   ==>sum = 1+2+3 = 6 
// 28 factors :1,2,4,7,14,28   ==>sum ==> 1+2+4+7+14 =28 

/*
#include<iostream>
using namespace std; 
int main()
{
    int num, sum =0 ; 
    cout<<"enter the number : ";
    cin>>num;  ///6 

    for(int i =1; i<num ; i++) // 6 6   <6 
    {
        if(num %i==0)  // 6 % 5  == 0 
        {
            sum =sum +i;   // sum =3  + 3 =6
        }
    }
    if (sum ==num) 
    {
        cout<<"perfect"<<endl;
    }
    return 0; 
}
*/ 

// amg : 

/*
153 :  number  digit   ==>3 
each digit   : 1**3  5**3  3**3  = 1  125   27 
sum =1+125 +27 =153   ==>amg 

1634 :  number  digit ==> 4 
each digit : 1**4   6**4  3**4  4**4    1  1296    81   256 
sum =1+1296 +81 +256 =1634  ==>amg
*/
/*

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,r,temp,sum,count =0; 
    cout<<"enter the number : ";
    cin >>num;  //1634 

    temp =num; // temp =1634  
    while(temp > 0) // 0 > 0 
    {
        temp =  temp /10;  // temp =0
        count ++;  // 4
    }
    temp =num; // temp  1634 
    sum =0 ;  //sum =0 
    while(temp >0) // 0 > 0 
    {
        r= temp %10; // r=  1 % 10   ==> r =1  //  
        sum =sum +pow(r,count);  // sum =1634
        temp = temp /10;   // temp  =0 

    }
    if(num ==sum)// 1634 ==1634
    {
        cout<<"amg"<<endl;
    }
    return 0; 
}
    */


// reverse  , pelindrome  :
/*
    use  =123   ans : 321 
    rev =0 
3 step  : 
1. r = num %10  ==>1 %10 =1 
2. rev = rev *10 +r  ==> rev = 32 *10 +1 =321
3. num = num /10      ==> num = 1 /10 =0 

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int num, r, rev=0; 
    cout<<"enter the number : ";
    cin>>num;  //123
    while(num >0)
    {
        r= num %10 ; // r= 123 %10 =3
        rev=  rev *10 +r; // rev =32 *10 +1 =321
        num =num /10; 

    }
    cout<<"reverse number is  : "<<rev<<endl;
    return  0 ; 
}
*/
/*
pelindrome  :   121 131 

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int num, r, rev=0; 
    cout<<"enter the number : ";
    cin>>num;  //123
    int temp =num; 
    while(temp >0)
    {
        r= temp %10 ; // r= 123 %10 =3
        rev=  rev *10 +r; // rev =32 *10 +1 =321
        temp =temp /10; 

    }
    if(rev ==num)
    {
        cout<<"pelindrome"<<rev<<endl;
    }
        return  0 ; 
}
*/ 

// twin  : 
/*
    user  =123 
    each digit  : 1+2+3 =6 
    each  multiply : 1*2*3 =6 

    sum ==multiply ==> twin 

logic : sum =0 , mul =1  
1. r = num %10  ===> r =1 %10  =1  
2. sum =sum +r   ==> sum =6
3. mul = mul *r   ==> mul = 6
4 . temp  = temp /10 ==> temp  = 1 

    if (sum == mul)  ==> twin 
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int  num,r,sum=0,mul=1; 
    cout<<"enter the number : ";
    cin>>num; 
    while(num >0)
    {
        r = num %10 ; 
        sum =sum +r ;
        mul =mul *r ;
        num = num /10; 
    }
    if (sum == mul)
    {
        cout<<"twin"<<endl;
    }
    else 
    {
        cout<<"not twin"<<endl;
    }
    return 0; 
}
*/ 

// strong number  : 

/*
145 : 
each digit  factorial  : 1 =1  4 =24  5=120 
sum = 1+24+120  =  145 
*/
/*
#include<iostream>
using namespace std;
int  main()
{
    int  num, r, sum=0,fact; 
    cout<<"enter the number : ";
    cin>>num; //145 
    int  temp =num;  // temp =145 
    while(temp >0) // 0 > 0 
    {
        r= temp %10 ;  // r= 1 %10 =1 
        fact =1 ; 
        for(int  i=1; i<=r; i++) // i =1 1<= 1 
        {
            fact =fact *i ;  // fact =1
        }
        sum =sum +fact;  // sum = 145
        temp = temp /10;  // temp =0 
    }
    if(sum ==num)
    {
        cout<<"strong"<<endl;
    }
    return 0;

}
*/ 

// amg in range  : 
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start,end, temp ,sum,count ; 
    cout<<"enter the start number : ";
    cin>>start; //100 
    cout<<"enter the end number : ";
    cin>>end; //10000 

    for(int i =start; i<=end; i++) //100  100 <=10000 
    {
            temp =i;   // temp =100
            count =0; 
            while(temp >0)
            {
                temp = temp /10; 
                count++; //3 
            }
            temp =i; // temp =100 
            sum= 0; 
            while(temp >0)// 100 > 0 
            {
                int  r = temp %10; 
                sum =sum + pow(r,count); 
                temp = temp /10; 
            } 
            if(sum ==i)
            {
                cout<<i<<endl;
            }
    }
    return 0; 
}
*/
// array  : 
/*

int  a[5] = {15,29,33,48,45}
index : a[0]  ===> 15 

int  a[5] = {12,45,67}
remaining  two elements  value is  : cout << a[3] ,a[4]  ===> 0 

*/

// update  : 
/*
int  a[5] = {15,29,33,48,45}

user  = 99 
index  = 3
after  update array  : {15,29,33,99,45}
*/
/*

#include<iostream>
using namespace std;
int main()
{
    int a[50], num,i,user,index; 
    cout<<"enter the number of elements : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {                   //         a[0]  a[1]  a[2]  a[3]  a[4]
        cout<<a[i]<<" ";  //int  a[5] = {15,  29,   33,   48,    45}
    }
    cout<<"enter the  element  you want  to update  : "; 
    cin>>user;  // 99 
    cout<<"enter the  index number  you want  to update  : "; 
    cin>>index;  // 3 
    a[index] =user;    //      a[3]= 99

    cout<<"after update  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  // int  a[5] = {15,  29,   33,   99,    45}
    }
    return 0; 
}
*/
// insert : 
/*
int  a[5] = {15,29,33,48,45}

user  =99 
index =2 

a[6]  = {15,29,99,33,48,45}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a[50], num,i,user,index; 
    cout<<"enter the number of elements : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {                   //             a[0]  a[1]  a[2]  a[3]  a[4] a[5]
        cout<<a[i]<<" ";  //int  a[5] = {15, 29,    99    33,   48,   45}
    }
    cout<<"enter the  element  you want  to insert : "; 
    cin>>user;  // 99 
    cout<<"enter the index number  you want to insert : ";
    cin>>index; //2 

    for(i=num; i>index; i-- ) // i =2 2 > 2
    {
        a[i]=a[i-1]; // a[3]  = a[2] 
    }
    a[index] =user;   // a[2] == 99  
    num++; 

    cout<<"after insert new  element in  array  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  // int  a[5] = {15, 29,    99    33,   48,   45}
    }
    return 0; 
}
*/
// delete  : 
/*
int  a[5] = {15,29,33,48,45} 

remove the  element  of index =2

a[4] = {15,29,48,45}
*/


// duplicate   remove  : 
/*
a[5] ={1,2,2,3,3} 
a[3] = {1,2,3}
*/

/*


#include<iostream>
using namespace std;
int main()
{
    int a[50], num,i,j,k; 
    cout<<"enter the number of elements : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {                   //             a[0]  a[1]  a[2]  a[3]  a[4] a[5]
        cout<<a[i]<<" ";  //int  a[5] = {1,   2 ,    3,    2}
    }

    for(i=0; i<num; i++) // 0  0 < 5 
    {
        for(j=i+1; j<num; j++) // 1  1 < 5  
        {
            if(a[i] ==a[j])  // a[0] ==a[1]   1==2
            {
                for(k=j; k<num; k++) //  k=4  4 <4 
                {
                    a[k] =a[k+1];    // a[3] =a[4]
                }
                j--; // 1
                num--; // 3 
            }
        }
    }
    cout<<"after remove  duplicate  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  // int  a[5] = {1,   2 ,    2    3,   1,   2}
    }
}
*/

/*
scan array  : 
do 
{
    1. update 2. insert 3. delete 4. duplicate 5. exit 
     

}while(choice !=5);
*/

//2 d array  :
/*
matrix : 
*/ 
/*
#include<iostream>
using namespace std;
int main()
{
    int a[50][50],row,col,i,j; 
    cout<<"enter the  number  of  rows : "; 
    cin>>row; 
    cout<<"enter the  number  of  cols : "; 
    cin>>col;
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j]; 
        }
    }
    cout<<"matrix is  : \n"; 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }

    for(i=0; i<row; i++)
    {
        int  rowsum =0 ; 
        for(j=0; j<col; j++)
        {
            rowsum =rowsum +a[i][j];
        }
        cout<<i<< "row sum is  : "<<rowsum<<endl;
    }
    for(i=0; i<row; i++)
    {
        int  colsum =0 ; 
        for(j=0; j<col; j++)
        {
            colsum =colsum +a[j][i];
        }
        cout<<i<< "row sum is  : "<<colsum<<endl;
    }
    return 0; 
}
*/
/*
original  matrix  :

1 2 3 
4 5 6 
7 8 9

first  row  sum  : 6 
second  row  sum  : 15
third  row  sum  : 24

first  col sum : 12 
second  col sum : 15 
third  col sum : 18
*/

//sort : 
// bubble sort  :
/*

#include<iostream>
using namespace std;
int main()
{
    int a[50],num,i,j,temp; 
    cout<<"enter the number of elements : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before sort  array  element is  : "<<endl;
    for(i=0; i<num; i++)     //asc to desc 
    {                        //         a[0]  a[1]  a[2]  a[3]  a[4]
        cout<<a[i]<<" ";  // int a[5] = {1,   5,     2,    4,    3}
    }

    for(i=0; i<num; i++) // 2  2 <5 
    {
        for(j=i+1; j<num; j++) // 4  4 <5 
        {
                if(a[i] > a[j]) // a[1] > a[4]   2 >3    
                {
                    temp =a[i];  // temp = 5 
                    a[i] =a[j]; // a[1] =2
                    a[j] =temp;//   a[2]    =5
                }                       //  1  2  5  4  3 
        }
    }
    cout<<"after sort  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  
    }
    return 0; 
}
*/

// selection sort  :

#include<iostream>
using namespace std;
int main()
{
    int a[50],num,i,j,temp; 
    cout<<"enter the number of elements : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before sort  array  element is  : "<<endl;
    for(i=0; i<num; i++)     //asc to desc 
    {                        //         a[0]  a[1]  a[2]  a[3]  a[4]
        cout<<a[i]<<" ";  // int a[5] = {1,   5,     2,    4,    3}
    }

    for(i=0; i<num-1; i++)  // 1  1 <4  
    {
        int min =i;   //   min = 1 
        for(j=i+1; j<num; j++) // j=4  4       <5  
        {
            if(a[j] < a[min]) // a[4] < a[2] // 3  < 2   
            {
                min =j;  // min =2 
            }
        }
        temp =a[i]; // temp = 5 
        a[i] =a[min];// a[1] =2   
        a[min] =temp; // a[2] =5   // a[5] = {1 ,2,5 }   
    }
    cout<<"after sort  array  element is  : "<<endl;
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
}