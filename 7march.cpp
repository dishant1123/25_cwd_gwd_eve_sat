/*
constructor  : automatically called when  object  is created. 

use : 
1.no return type. 
2.class name  = constructor name

type  : 

1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor  overloading 

*/

// ex :1 default constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default constructor called"<<endl;
            cout<<"manav"<<endl;
        }
};
int main()
{
    student s; 
    return 0; 
}

*/ 

// ex :2 non parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name ; 
        int  age ;
    student()
    {
        name ="aksh"; 
        age =19; 
        cout<<"non parameterized constructor called"<<endl;
    } 
    void  show()
    {
        cout<<"name of student is  : "<<name<<endl;
        cout<<"age of student is  : "<<age<<endl;
    }
};
int  main()
{
    student s; 
    cout<<"name of student is  : "<<s.name<<endl;
    cout<<"age of student is  : "<<s.age<<endl;
    s.show();
    return 0 ; 
}
*/

// ex :3 parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{   
    public : 
        string  name;
        int  age; 
    student(string n,  int  a)
    {
        name =n; 
        age =a ; 
    } 
    void  show()
    {
        cout<<"name of student is  : "<<name<<endl;
        cout<<"age of student is  : "<<age<<endl;
    }
};
int main()
{
    student s("aksh", 19);
    student s1("manav", 20);
    s.show();
    return 0; 
}
*/

// ex :4 copy constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string  name; 
        int  age; 
    student(string n,  int  a)
    {
        name =n; 
        age =a ;
        cout<<" parameterized constructor called"<<endl;
    }
    student(const student &s)
    {
        name =s.name; 
        age =s.age;
        cout<<"copy constructor called"<<endl;
    }
    void show()
    {
        cout<<"name of student is  : "<<name<<endl;
        cout<<"age of student is  : "<<age<<endl;
    }
};
int main()
{
    student s("rutvi",19);
    student s1(s);
    // s1.show(); 
    s.show(); 
    return 0; 
}
*/ 

// ex :5 constructor  overloading

#include <iostream>
using namespace std;
class student 
{
    public : 
        string  name;
        int  age;
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
    void  show()
    {
        cout<<"name of student is  : "<<name<<endl;
        cout<<"age of student is  : "<<age<<endl;
    }
};

int main()
{
    student s; 
    student s1("aksh"); 
    s1.show(); 
    student s2("rutvi", 20);
    s2.show();
    return 0 ; 

}