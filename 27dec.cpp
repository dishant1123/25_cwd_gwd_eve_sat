/*
nested loop   : 

prime  perfect amg reverse pelindrome  twin  strong harshard number  

*/
// pelindrome  : 
/*
#include<iostream>
using namespace std;
int main()
{
    int  start,end,r,temp,rev ; 
    cout<<"enter the starting number : "; 
    cin>>start;
    cout<<"enter the ending number : "; 
    cin>>end;
    for(int i=start; i<=end; i++) // 100 -500 
    {
        rev=0; 
        temp =i;  // 123 
        while (temp >0 ) //0 > 0 
        {
            r = temp %10;  // r=  1 %10=1  
            rev=  rev *10 +r; // rev =32 *10 +1 =321    
            temp = temp /10;// temp = 1 /10 =0 
        }
        if(rev ==i)
        {
            cout<<i<<endl; 
        }
    }
    return 0; 
}
*/ 
// strong  number  : 
/*
145 : 
each digit  factorial  : 1!  =1  4!=24  5!=120 
sum =1+24+120 =145   ==> strong number
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int num, start,end,r,temp,sum,fact; 
    cout<<"enter the starting number : ";
    cin>>start; 
    cout<<"enter the ending number : ";
    cin>>end; 

    for(int i=start; i<=end; i++) // 101  -1000 
    {
        temp =i ;  // 123
        sum=0 ; 
        while(temp > 0)
        {
            r= temp %10 ; // r= 123 %10 =3
            fact =1 ; 
            for(int j=1;j<=r; j++)
            {
                fact = fact *j;  // fact =6 
            } 
            sum =sum +fact; //sum =
            temp = temp /10 ; 
        }
        if (sum ==i)
        {
            cout<<i<<endl;
        }
        
    }
    return 0; 
}
*/ 

// pattern  : 

/*
1.           2. 
* * * * *    1 2 3 4 5
* * * *      2 3 4 5
* * *        3 4 5
* *          4 5
*            5 

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j; 
    for(i=1; i<=5; i++)// 1 
    {
        for(j=5; j>=i; j--) // 5  5 >=1 
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0; 
}