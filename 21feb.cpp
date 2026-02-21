/*
1. static : memory  allocation at time  of  compile. 
2. dynamic : memory llocation at time  of  run. new() , delete()
*/ 

// ex :1 
/*
#include <iostream>
using namespace std;
int main()
{
    int *p;  // pointer  declaration

    p=new int; // dynamic memory allocation

    *p=10; 
    cout<<"value of p is  : "<<*p<<endl;

   // delete p; 
    return 0; 
}
*/
/*
1. new int  : dynamic  memory allocation
2. delete p :freeing the memory 
memory  leak 

stack       heap 
              df12fhjog 
              fgh12nfjog

*/

// ex :2 dynamic  memory allocation  in array  : 
/*
#include <iostream>
using namespace std;
int main()
{
    int  n;  // int  a[50], n ==>   
    cout<<"enter the size of array : ";
    cin>>n; 

    int *p = new int[n];
    
    cout<<"enter the array  element  : "; 
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    cout<<"array  elemenr is  : "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    delete []p; 
    return 0; 
    
}
*/ 

// malloc : 
/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p; 

    p=(int *) malloc(sizeof(int)); 

    if(p==NULL)
    {
        cout<<"memory  not  allocated"<<endl;
        return 0; 
    }
    *p =100; 
    cout<<"value of p is : "<<*p<<endl;
    free(p); 
    return 0; 
}
*/ 

// structure with  pointer  :  
/*
#include <iostream>
using namespace std;
struct student
{
    int id; 
    string name;
}; 

int main()
{
    
    student s={101,"jagrut"};
    student s1={102,"aksh"};

    student *p =&s;
    student *q =&s1;  
    
    cout<<"id of 1 student is  : "<<p->id<<endl;
    cout<<"name of 1 student is  : "<<p->name<<endl;
    
    cout<<"id of 2 student is  : "<<q->id<<endl;
    cout<<"name of 2 student is  : "<<q->name<<endl;
     

    student s[2] ;
    student *p=s;

    for(int i=0; i<2; i++)
    {
        cin>>(p+i)->id ;
        cin>>(p+i)->name;
    }
    cout<<"student info is : "<<endl;
    for(int i=0; i<2; i++)
    {
        cout<<"id of student "<<i+1<<" is  : "<<(p+i)->id<<endl;
        cout<<"name of student "<<i+1<<" is  : "<<(p+i)->name<<endl;
    }
    return 0; 
}
*/
/*
int a[50],  n ; 
int  *p =a ; 

for(int  i=0; i<n; i++)
{
    cin>>(p+i); 
}
*/

/*
oops : object  oriented  programming

class  :data member , function  , blueprint of  object 

object : real entity , instance  of class .

ex :  

fruits :   ==> class 
        apple  kiwi  mango  ==> object 

access specifier  : 

1. public  : accessible  from anywhere
2. private : within  the class only  
3. protected: within  the class  and  derived  class  (intherited)

pillar : 

1. inheritance  : 5 types  inheritance 
2. polymorphism : 2 type  ==> run  ,  complie 
3. encapsulation : 2 method  ==> 1.get  2. set 
4. abstraction  : abstract class , abstract method/function 
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    public :   // id name  ==> class data member
        int id=1; 
        string  name="suhani"; 
    void show()
    {
        cout<<"id of student is  : "<<id<<endl;
        cout<<"name of student is  : "<<name<<endl;
    }
};
int main()
{
    student s;
    // cout<<"id of student is  : "<<s.id<<endl;
    // cout<<"name of student is  : "<<s.name<<endl;
    s.show();
    s.name ="rutvi";
    s.id =102; 

    s.show(); 
    return 0; 
}
*/

// ex :2 
/*
#include <iostream>
using namespace std;
class student 
{
    public :   // id name  ==> class data member
        int id; 
        string  name;
    void input()
    {
        cout<<"enter id of student : ";
        cin>>id; 
        cout<<"enter name of student : ";
        cin>>name;
    }    
    void show()
    {
        cout<<"id of student is  : "<<id<<endl;
        cout<<"name of student is  : "<<name<<endl;
    }
};
int main()
{
    student s; 
    s.input();  //  hemil 101  
    s.show();

    s.name ="jagrut"; 
    s.id =103; 

    s.show(); 
    return 0; 
}
*/

// ex :3 private  : 

#include <iostream>
using namespace std;
class student 
{
    private : 
        int id=1 ; 
        string name ="aksh"; 
    // public :
    void show()
    {
        cout<<"id of student is  : "<<id<<endl;
        cout<<"name of student is  : "<<name<<endl;
    }
    public : 
    void display()
    {
        show();
    }
};
int main()
{
    student s; 
    // cout<<"id of student is  : "<<s.id<<endl;
    // cout<<"name of student is  : "<<s.name<<endl;
    // s.show();
    s.display(); 
    
    return 0; 
}
 /*
 s.show(); 
 */