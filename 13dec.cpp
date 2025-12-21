// with using namespace std; 
/*
#include<iostream>
using namespace std; 
int main()
{
    cout<<"raj"<<endl; // ==> end  of  line 
    cout<<"siman\n";
    cout<<"ja ja tu ji le apni zingadi"<<endl;  
    return 0; 
}
*/
// without using namespace
/*
#include<iostream>
int main()
{
    std::cout<<"raj"; // ==> end  of  line
    std::cout<<"siman\n";
    return 0;
}
*/

/*
data type  : 
1. int  
2. float 
3. string  / char 
4. double  
5. long int 
6. bool 

========================================================================

varibable  declaration  rules  

1. start special character , number :   int  @a=10 , int a@ =90 ,int 12a =90 , int a12 =78 ,   ===> except : _ 
2. int a12 =90 , int __=78   ==> valid 

========================================================================
operators : 

1. airthematic operator : + - * / % 
    ex : 2 %10 = 
2. relational operator : == != > < >= <=
    ex : int  a=12   int b=12.00 
    cout<<(a==b)<<endl; 
3. logical operator : &&,  ||
4. bitwise operator : & | ^ << >>
5. assignment operator : = += -= *= /= %= ^= &= |= <<= >>= 
    ex : a=a+1  a+=1  
6. increment operator : ++ -- 
    pre inc : ++a   post  inc : a++ 
    pre dec : --a  post dec : a-- 

    ex : int a =23; 

    a--  +  a++  - a++  - a++  + a++  = ?  cout <<a <<endl;   

  23  22  
    */
/*
#include<iostream>
using namespace std;
int main()
{
    // int __=89;  
    //float b=12.56;
    int  a=12; 
    float b=12.00;  
    // cout<< "value is  :"<<__<<"\n";
    //cout<<"value is  :"<<b<<"\n";
    cout<<"relational  op  :"<<(a==b)<<"\n";
    return 0; 
}

*/ 

/*
conditional  :
if (con)
    statement  cout<<
else
   statement  cout<< 

switch(choice)
{
    case 1:
        statement  cout<<
        break ;
    defualt:
        statement  cout<<
} 
*/

/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules:

ask user to enter the city and grade.

1. Salary Components

Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay
 
HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay

3.Annual Income = Gross Pay × 12      =                                 13  

4.
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     | 
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              | 12500  
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    | 25000   
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    | 7500   
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   | 50000  
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 | 62500 
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |




*/