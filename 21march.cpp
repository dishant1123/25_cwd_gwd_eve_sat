// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name="saloni"; 
        int age =19; 
    void display()
    {
            cout<<"name of student is  : "<<name<<endl;
            cout<<"age of student is  : "<<age<<endl;
        
    }
};
class teacher : public student 
{
    public : 
        string t_name = "prof.vyas"; 
        void show()
        {
            cout<<"name of teacher is  : "<<t_name<<endl;
        }
};
int  main()
{
    teacher t; 
    t.display(); 
    t.show(); 
    return 0 ; 
}
*/ 

// ex :2  multi level inheritance
/*

class a 
class b : public a   ===> b ==>a 
class c : public b   ===> c ==> a,b 
*/

/*
#include <iostream>
using namespace std;
class employees 
{
    private :
        int salary ; 
    public : 
        string name; 
        employees(int  salary , string name)  // name =n  salary =s 
        {
            this->salary =salary;
            this->name =name; 
        }
    void show_salary()
    {
        cout<<"salary of employee is  : "<<salary<<endl;
    }
};
class manager : public employees 
{
    public : 
        string department; 
    manager(int salary, string name, string department):employees(salary,name) // base  class constructor called.
    {
        this->department =department;
    }
    void show_manager_info()
    {
        cout<<"name of employee is  : "<<name<<endl;
        show_salary();
        cout<<"department of manager is  : "<<department<<endl;
    }
};
class CEO : public manager 
{
    public : 
        string c_name;
    CEO(int salary, string name, string department):manager(salary,name,department)
    {
        c_name ="aksh shah";
    }
    void show_ceo_info()
    {
        cout<<"name of CEO is  : "<<c_name<<endl;
    }
};

int main()
{
    CEO c(90000,"rutvi","r&d");
    c.show_ceo_info();
    c.show_manager_info();
    cout<<"==============="<<endl;
    manager m(80000,"hemil","HR");
    m.show_manager_info();
    return 0; 
}
*/ 

// ex :3  hirearchy  : multiple derived class inherit  from  same base class . 
/*

multiple                                  multi level 
class a                                 class a 
class b                                 class b : public a
class c : public a , public b           class c : public b

*/
/*
hirearchy :
class a 
class b : public a 
class c : public a 
class d : public a 
*/

// ex :5  hybrid inheritance : its  combination  of  multiple + multi level 

/*
class person 
class  student : public person
class teacher : public person
class result : public student , public teacher

               person 
               /    \
            student  teacher
               \     /
                result    
*/
/*

#include <iostream>
using namespace std;
class person 
{
    protected : 
        string name;
    private : 
        int age; 
    public : 
        person(string n, int a)
        {
            name =n; 
            age =a;
            cout<<"person constructor called"<<endl;
        }
    void showperson()
    {
        cout<<"name of person is  : "<<name<<endl;
        cout<<"age of person is  : "<<age<<endl;
    }
};

class student : public person
{
    protected : 
        int  roll_no; 
    public : 
        student(string n, int a, int r):person(n,a)
        {
            roll_no =r;
            cout<<"student constructor called"<<endl;
        }
};
class teacher : public person
{
    protected : 
        string subject; 
    public : 
        teacher(string n, int a, string s):person(n,a)
        {
            subject =s;
            cout<<"teacher constructor called"<<endl;
        }
};

class result : public student , public teacher
{
    private :
        int  marks; 
    public : 
        result(string n, int a, int r, string s, int m):student(n,a,r),teacher(n,a,s)
        {
            marks =m; 
            cout<<"result constructor called"<<endl;
        }
    void display()
    {
        cout<<"==========result info==========="<<endl;
        student ::showperson(); 
        cout<<"rollno is  : "<<roll_no<<endl;
        cout<<"subject is  : "<<subject<<endl;
        cout<<"marks is  : "<<marks<<endl;
    }
};
int  main()
{
    result r("yug",19,60,"computer",98); 
    r.display(); 
    return 0; 
}
*/ 
/*
virtual inheritance  : 
1. diamond problem
2. virtual keyword 


*/


#include <iostream>
using namespace std;
class person 
{
    protected : 
        string name;
    private : 
        int age; 
    public : 
        person(string n="", int a=0)
        {
            name =n; 
            age =a;
            cout<<"person constructor called"<<endl;
        }
    void showperson()
    {
        cout<<"name of person is  : "<<name<<endl;
        cout<<"age of person is  : "<<age<<endl;
    }
};

class student : virtual public person
{
    protected : 
        int  roll_no; 
    public : 
        student (int r=0)
        {
            roll_no =r;
            cout<<"student constructor called"<<endl;
        }
};
class teacher : virtual public person
{
    protected : 
        string subject; 
    public : 
        teacher(string s="")    
        {
            subject =s;
            cout<<"teacher constructor called"<<endl;
        }
};

class result : public student , public teacher
{
    private :
        int  marks; 
    public : 
        result(string n, int a, int r, string s, int m):student(r),teacher(s),person(n,a)
        {
            marks =m; 
            cout<<"result constructor called"<<endl;
        }
    void display()
    {
        cout<<"==========result info==========="<<endl;
        student ::showperson(); 
        cout<<"rollno is  : "<<roll_no<<endl;
        cout<<"subject is  : "<<subject<<endl;
        cout<<"marks is  : "<<marks<<endl;
    }
};
int  main()
{
    result r("yug",19,60,"computer",98); 
    r.display(); 
    return 0; 
}