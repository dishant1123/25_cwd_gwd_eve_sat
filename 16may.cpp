/*
destructor  :

1.  destructor  is  called  when  object  is  destroyed. 

used : 
1.free memory
2.close file 
3. obj delete  

syntax : 

~class name()
{
 //code
}
 rule  : 
1. it start with ~ 
2. no return type  
3. no argument 
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{   public : 
    student()
    {
        cout<<"constructor called"<<endl;
    }
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    student s1; 
    cout<<"object created"<<endl;

    return 0 ;
}
*/

// ex :2 dynamic memory : 
/*
#include <iostream>
using namespace std;

class test 
{
    int  *p ; 

    public : 
    test()
    {
        p =new int; 
        cout<<"memory allocated"<<endl;
    }
    ~test()
    {
        delete p; 
        cout<<"memory deleted"<<endl;
    }
};
int  main()
{
    test t1;
    return 0; 
}
*/ 

// file handling : 
/*
fstream  ===> file handling  

read    : only exiting  open  ===> only read  ===> no create new file  
write   : new file create  ==> write  ==> exiting  open  ==> w ===> overwrite 
append  : new file create  ==> write  ==> exiting  open  ==> w ===> append


file mode : 

ios ::in       read    ===> ifstream() 
ios ::out      write   ===> ofstream()
ios ::app      append
*/ 


// ex :1 write  file  
/*
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ofstream file; 
    file.open("yug.txt"); 

    file<<"hello yug !!!! how are you ????"<<endl;
    file<<"my  best friend name is  vivan patel."<<"\n";
    file<<"live  in  ahmedabad."<<"\n";
    file<<"dream to  meet MS Dhoni."<<"\n";

    file.close(); 

    cout<<"file created successfully"<<endl;
    return 0; 

}
*/ 
// ex :2 read  file
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int  main()
{
    ifstream file;
    file.open("yug.txt");
    string s; 
    while(getline(file,s))
    {
        cout<<s<<endl;
    }
    return 0 ;

}
*/
 // ex :3 
#include <iostream>
#include <fstream>
using namespace std;
int  main()
{
    ofstream file; 
    file.open("yug.txt",ios::app); 

    file<<"yug wishes to meet dishant sir outside the  royal  and give the party !!!"<<endl;
    file<<"do you have any GF  yug  ??? ";
    file.close(); 

    cout<<"file created successfully"<<endl;
    return 0; 

}