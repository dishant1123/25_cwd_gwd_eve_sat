/*
constructor  : automatically called when the object is created.  

rules : 
1. constructors name  =class name 
2. no return type  

type  : 

1. default constructor
2. parameterized constructor
3. non-parameterized constructor
4. copy constructor
5. constructor  overloading
*/

// ex :1  default  constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default constructor called"<<endl;
        }
};
int main()
{
    student s; 
    return 0; 
}
*/ 
// ex :2  non -parameterized  constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        string name ; 
        int age;  
        student()
        {
            name ="aksh";
            age =19; 
            cout<<"non-parameterized constructor called"<<endl;
        }
        void show()
        {
            cout<<"name of student is  : "<<name<<endl;
            cout<<"age of student is  : "<<age<<endl;
        }
};
int  main()
{
    student s; 
    s.show();
    return 0; 
}
*/
// ex :3  parameterized  constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        string name ; 
        int age;  
        student(string n, int  a)
        {
            name =n; 
            age =a; 
        }
        void show()
        {
            cout<<"name of student is  : "<<name<<endl;
            cout<<"age of student is  : "<<age<<endl;
        }
};
int  main()
{
    student s("yug",19);
    student s1("vivansh",20);
    s.show();
    s1.show();
    return 0; 
}
*/ 

// ex :4  copy  constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int age;
    student(string n,int  a)
    {
        name =n; 
        age =a;
    }
    student(const student &s)
    {
        name =s.name; 
        age =s.age; 
    }
    void show()
    {
        cout<<"name of student is  : "<<name<<endl;
        cout<<"age of student is  : "<<age<<endl;
    }
};

int main()
{
    student s("aksh",19);
    student s1(s); 

    s1.show(); 
    return 0 ; 
}
*/ 

// ex :5  constructor  overloading
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name;
        int age; 
    student()
    {
        cout<<"default constructor called"<<endl;
    }
    student(string n)
    {
        name =n; 
        age =19; 
    }
    student(string n, int  a)
    {
        name =n;
        age =a;
    }
    void show()
    {
        cout<<"name of student is  : "<<name<<endl;
        cout<<"age of student is  : "<<age<<endl;
    }
};
int  main()
{
    student s; 

    student s1("aksh");
    s1.show(); 

    student s2("vivansh", 20);
    s2.show();
    return 0; 
}
*/ 
// ex : this operator  : 
#include <iostream>
using namespace std;
class student 
{
    public :
        string name ; 
        int age;  
        student(string name , int  age)
        {
            this->name =name ; 
            this->age =age;
        }
        void show()
        {
            cout<<"name of student is  : "<<name<<endl;
            cout<<"age of student is  : "<<age<<endl;
        }
};
int  main()
{
    student s("aksh", 19);
    s.show();
    return 0; 
}
/*
constructor  : 
3 attempt  : 
*/
