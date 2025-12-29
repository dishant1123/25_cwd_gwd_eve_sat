/*
c : 
#include<stdio.h>
printf(); 
scanf();

c++ : object oriented programming languages 
#include<iostream>
cout<< 
cin>>

====================================

#include<iostream>
using namespace std; 
int main()
{
    cout<<"Hello World"<<endl;  // end  of the  line.
    return 0; 
}
or  : 
#include<iostream>
int main()
{
    std::cout<<"Hello World"<<;     
    std::cout<<"my name is  devanshi"<<"\n";

    return 0; 
}
========================================
variable declaration :

1.special character , digit , ex : int @a=90 , int 12a=90 , int a@a =89  ==> incorrect way to declare varibale
2. except : int a_ =90  , int a12=78 , int __ =67  ==> correct way to declare varibale
=========================================
%d %f %c

data type  : 

1.  int : post or negative  +32767 - 32678 
2.  char / string : single character or string of characters
3.  float : decimal value 
4.  double : decimal value
5.  long : pos or neg value exceeding limit of int  ex :int  a=10000000; 
6.  bool : true or false

*/
/*
#include<iostream>
using namespace std; 
int main()
{
    cout<<"Hello World"<<endl;  // end  of the  line.
    return 0; 
}

#include<iostream>
int main()
{
    std::cout<<"Hello World";     
    std::cout<<"my name is  devanshi"<<"\n";

    return 0; 
}
*/
// print all data type  : 
/*
#include<iostream>
using namespace std;
int main()
{
    int a=90;
    float b=56.89;
    string c="devanshi";  
    double d =123456.789; 
    long int e=1234567;
    bool f =true;
    cout<<"a value is  : "<<a<<endl;      // left swift 
    cout<<"b value is  : "<<b<<endl;       
    cout<<"c value is  : "<<c<<endl;       
    cout<<"d value is  : "<<d<<endl;      
    cout<<"e value is  : "<<e<<endl;      
    cout<<"f value is  : "<<f<<endl;      

    return 0;
}
*/ 

// scan value : 
/*
#include<iostream>
using namespace std;
int main()
{
    int a; 
    cout<<"enter value of a : ";
    cin>>a; 

    cout<<"value of a is : "<<a<<endl;
    return 0; 
}
*/ 

// conditional statement  

/*

if (con) 
    cout<<
else 
    cout<< 

if con  
    cout<<
else if con 
    cout<<
else 
    cout<<
*/

// task   :1 ask user to enter the 3 number  and print small  medium and  larger ex: a=10 b =20 c=30   ==< c is  big  b is  medium a is small 