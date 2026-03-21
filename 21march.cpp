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

