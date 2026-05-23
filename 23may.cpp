/*
excepation handling :

ex : 
    a =10 
    b=0 

    result  = a/b  ===> zero divison error 
    
try   :  code that may generate  error 
throw :  used to generate exception 
catch :  handle  the exception
*/

// ex :1 
/*
#include <iostream>
using namespace std;
int   main()
{
    int  a,b,result; 
    cout<<"enter value of a  and  b : ";
    cin>>a>>b;

    try 
    {
        if(b ==0)
        {
            throw "zero divison error you can't divide by zero";
        }
        result  = a/b; 
        cout<<"result is  : "<<result<<endl;
    }
    catch(const char *str)
    {
        cout<<"excepation  :"<<str<<endl;
    }
    return 0 ;

}
*/
// ex :2 
/*
#include <iostream>
using namespace std;
int  main()
{
    int  age; 
    cout<<"enter your age : ";
    cin>>age; 

    try 
    {
        if(age <0)
        {
            throw "age should be greater than zero";
        }
        cout<<"valid age : "<<age<<endl;
    }
    catch(const char *x)
    {
        cout<<"excepation  :"<<x<<endl;
    }
    return 0; 
}
*/ 

// ex :1 file  handling with exception  handling  : 
/*
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ofstream file;

    try 
    {
        file.open("jagrut.txt"); 

        if(!file)
        {
            throw "file not found";
        }
        file<<"hello world"<<endl;
        file<<"my name is jagrut panjabi but not  panjabi understand gujarati  little little."  <<endl;
        file<<"dream to meet  putin."<<endl;
        file<<"second  dream to meet  meloni"<<endl;
        cout<<"data written to file"<<endl;
        file.close();
    }
    catch (const char *str)
    {
        cout<<"excepation  :"<<str<<endl;
    }
    return 0; 
}
*/ 
// ex :2 

#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ifstream file;

    try 
    {
        file.open("saad.txt"); 

        if(!file)
        {
            throw "file not found";
        }
        
        file.close();
    }
    catch (const char *str)
    {
        cout<<"excepation  :"<<str<<endl;
    }
    return 0; 
}