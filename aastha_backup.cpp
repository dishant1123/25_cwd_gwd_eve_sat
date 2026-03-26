/*
1.constrcutor 
    automatically called when object is created. 
        a.default constructor b.parameterized constructor c.non parameterized constructor d.copy constructor
    class name = constructor name
2. inheritance
*/

// ex : 1 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default constructor called"<<endl;
            cout<<"name is aastha"<<endl;
        }
};
int main()
{
    student s; 
    return 0; 
}
*/ 

// ex :2  non parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string  name;
        int  age;  
    student()
    {
        name ="aastha"; 
        age=19;
        cout<<"non parameterized constructor called"<<endl;
    }
    void  show()
    {
        cout<<"name is  : "<<name<<endl;
        cout<<"age is  : "<<age<<endl;
    }
};
int main()
{
    student s;
    // cout<<"name is  : "<<s.name<<endl;
    // cout<<"age is  : "<<s.age<<endl;
    s.show(); 
    s.name ="hemlata";
    s.age =20;
    s.show();
    return 0; 
}
*/ 

// ex :3  parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string  name;
        int  age;
    student(string n , int  a)
    {
        name =n; 
        age =a;
        cout<<"parameterized constructor called"<<endl;
    }
    void  show()
    {
        cout<<"name is  : "<<name<<endl;
        cout<<"age is  : "<<age<<endl;
    }
};
int  main()
{
    student s("aastha",19);
    student s1("hemlata",20);
    s.show();
    s1.show();
    return 0; 
}
*/

// ex :4 copy constructor

#include <iostream>
using namespace std;
class student 
{
    public : 
        string  name;
        int  age;
    student(string n ,int a)
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
        cout<<"name is  : "<<name<<endl;
        cout<<"age is  : "<<age<<endl;
    }
};

int main()
{
    student s("aastha",19);
    student s1(s); 

    cout<<"name is  : "<<s1.name<<endl;
    cout<<"age is  : "<<s1.age<<endl;
    s1.show(); 

    return 0; 

}

/*
int  a[5] = {1,2,3,4,5};

b[5]=a[5];
cout<<b[0]   ==> 1  
*/