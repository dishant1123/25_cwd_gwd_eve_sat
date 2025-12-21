/*
loops  : 
1. for : entry    
2. while : entry  
3. do while : exit 

*/

// prime  perfect amg reverse pelindrome  twin  strong

// amg : 
/*
153 : 1 **3  =1   5**3 =125  3**3 =27 
sum =1+125 +27 =153  ==>amg  

370  : 3**3  7**3  0**3 
        27 + 343 +0  ==>370 

1634 : 1**4  6**4  3**4 4**4 
       1+  1296      +81 +256 = 1634  ==>amg 
       
digit :  3  :153 

r= num %10 = 1 %10 =1  
sum =sum +pow(r,digit)  sum = 153 
num = mum /10   ==> num = 1 /10 = 0 
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int num,r,sum,count=0,temp; 
    cout<<"enter a number"<<endl; //153 
    cin>>num;  
    temp =num;  // temp =153  

    while(temp >0)  // 0 >0 
    {
        temp =temp /10;  //1 /10 =0 
        count++;  // count =3
    }

    temp =num;  // temp =153 
    sum =0 ; 
    while(temp >0)  //0 > 0 
    {
        r= temp %10; // r = 1 %10 =1  
        sum = sum +pow(r,count); // sum = 153
        temp =  temp /10;  // temp = 1 /10 =0
    }
    if (sum ==num)
    {
        cout<<"amg"<<endl;
    }
    return 0; 
}

// strong number  : 
/*
145 : 
each factorial  : 1 =1   4! =1*2*3*4 =24  5! =1*2*3*4*5 =120
sum = 1+24+120 =145  ==>strong number


*/
