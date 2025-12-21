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
/*
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
*/ 
// strong number  : 

/*
145 : 
each factorial  : 1 =1   4! =1*2*3*4 =24  5! =1*2*3*4*5 =120
sum = 1+24+120 =145  ==>strong number

*/

#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0,fact,temp; 
    cout<<"enter a number"<<endl; 
    cin>>num;   //145 

    temp =num;  // temp =145 
    while (temp >0 ) 
    {
            r = temp %10;  // r= 1 %10 =1
            fact =1;  
            for(int i=1; i<=r; i++)
            {
                    fact =fact *i;  // fact =1
            }
            sum =sum +fact;  // sum =120 +24 =145
            temp = temp /10;  // temp =0 

    }
    if (sum ==num)
    {
        cout<<"strong number"<<endl;
    }
    return 0;
}


/*
task  :1 

Write a cpp program to check number is Harshad number or not.
A harshad number is a number that is divisible by the sum of its digits. E.g., the number 18 is a harshad number, because 
the sum of the digits 1 and 8 is 9 (1 + 8 = 9), and 18 is divisible by 9.

ex: 21 
sum of each digit  : 2+1 =3 
num divisible by : num % sum  ==0  that is  :  21 %3==0 then  it is harshad number. 

ex: 19  not  harshard number 

steps : 
1. user enter the  number  ==>14 
2. temp =num ;  
3. while(temp >0 )
4.      r= = temp %10 
5.      sum =sum +r 
6.      temp  = temp /10 
7.if(num  %sum==0) 

*/
// task :2 
/*
Write a C++ program to accept one number from the user and check whether it is a Disarium number or not.
A number is called a Disarium number if the sum of its digits raised to the power of their respective positions is equal to the number itself.
Example:
175 = 1¹ + 7² + 5³ = 175

logic : 

a= num /100 = 175 /100 =1  
b= (num /10)  %10   = 7 
c=num %10 = 5 
sum = pow(a,1) + pow(b,2) +pow(c,3)  

if sum ==num  ==>  Disarium number

4 digit : 
1234 : 
a=num /1000 = 1 
b=(num /100) %10 =2
c=(num /10) %10 =3 
d=num %10 = 4

*/


/*
HW :

A hotel offers two types of rooms: Studio and Apartment.
Write a C++ program to calculate the total rent for the entire stay for both Studio and Apartment rooms based on the month of stay and number of nights.

| Month Period         | Studio ($/Night) | Apartment ($/Night) |
| -------------------- | ---------------- | ------------------- |
| January – April      | 50               | 60                  |
| May – August         | 70               | 80                  |
| September – December | 80               | 90                  |

Discount Rules
1.Studio Room Discounts
January – April
    More than 3 nights → 20% discount
    More than 7 nights → 30% discount
May – August
    More than 3 nights → 10% discount
    More than 7 nights → 20% discount
September – December
    More than 3 nights → 5% discount
    More than 7 nights → 10% discount
2.Apartment Room Discount
    If more than 7 nights, 10% discount, applicable for all months.

Input Data:
The program should accept the following inputs from the user:
    Month of stay (as a string)
    Number of nights (maximum 30 days)

Output Data
    The program should display:
    Total Studio rent after applying the discount
    Total Apartment rent after applying the discount
ex : 
Enter Month: May
Enter Nights: 5
Output:
    Studio Rent for 5 Nights is $315
    Apartment Rent for 5 Nights is $400

    */