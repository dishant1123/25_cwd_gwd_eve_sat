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
