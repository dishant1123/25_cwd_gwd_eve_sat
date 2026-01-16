/*
print  ==> cout<<     ==> left shift 
scan   ==> cin >>     ==>  right  shift  

================================

switch(expression)
{
    case 1 : 
        cout<< 
        break;
    case 2 : 
        cout<<
        break;
    default : 
        cout<<
        break;
}
=================================================
conditonal statement  : 

if(con) 
{
cout<<
}
else 
{
cout<<
}
==================
if (con)
   cout<< 
else if (con) 
    cout<< 
else 
    cout<< 

================= 

if  (con ) 
    if(con) 
        cout<<
    else 
        cout<< 
else if (con )
    if (con)
        cout<<
    else 
        cout<<
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

3.Annual Income = Gross Pay × 12          AI =1200000 
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

#include<iostream>
using namespace std;
int main()
{
    long int city,basic,others,hra,dra,pf,ta,ai,tax,grosspay,pt;
    char grade;
    cout<<"enter the grade  :  ";
    cin>>grade; 
    
    switch(grade)
    {
        case 'a' :
              basic =60000;  
              others =8000; 
            break; 
        case 'b' :
              basic =50000; 
              others =7000; 
            break;
        case 'c' :
              basic =40000; 
              others =6000; 
            break;
        case 'd' :
              basic =30000; 
              others =5000; 
            break;
        case 'e' :
              basic =20000; 
              others =4000; 
            break;
        case 'f' :
              basic =10000; 
              others =3000; 
            break;
        default:
            cout<<"enter correct grade"<<endl;
    }
    cout<<"enter the city  :  ";
    cin>>city;
        
    switch (city)
    {
        case 1:
            hra = 0.30 *basic;
            break;
        case 2:
            hra = 0.20 *basic;
            break;
        case 3:
            hra = 0.10 *basic;
            break;
        default:
            cout<<"enter correct city"<<endl;
    }
    dra = 0.5 *basic;
    ta= 900;
    pf= 0.11 *basic;
    pt = 200;

    grosspay =basic + hra + dra+ others + ta - pt- pf; // 60000 + 18000 + 30000 +8000 +900 - 200 -6600 =110100 
    cout<<"gross pay  :  "<<grosspay<<endl;
    ai = grosspay *12;
    cout<<"annual income  :  "<<ai<<endl;

    cout<<"tax calculation : \n"; 

    if(ai<=250000)
    {
        tax = 0;
    }

    return 0; 
}
