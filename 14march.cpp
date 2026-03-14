/*
constructor  : automatically called when  object  is created.

rules  : 
1. constructor  name  =class name 
2. no return type

*/
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int  age;
    student(int a , string n)
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
int main()
{
    student s(20,"aarya");
    s.show();
    return 0 ;
}

*/ 

/*
inheritance  : to inherit  properties  and methods  from  parent class / base class. 

types : 
1. single  inheritance
2. multiple  inheritance
3. multi level  inheritance
4. hirearchy
5. hybrid 


*/

// ex :1 single inheritance
/*
#include <iostream>
using namespace std;
class student 
{
    // public :
    // private :
    protected :  
        string  name ="aksh"; 
        int age =19; 
    // public : 
    //     void show()
    //     {
    //         cout<<"name of student is  : "<<name<<endl;
    //         cout<<"age of student is  : "<<age<<endl;
    //     }
};
class teacher :public student 
{
    public : 
        void display()
        {
            cout<<"name of student is  : "<<name<<endl;
            cout<<"age of student is  : "<<age<<endl;
        
            // show();
        }
};
int main()
{
    teacher t; 
    t.display(); 
    return 0; 
}
*/

// ex :2  
/*
#include <iostream>
using namespace std;
class student
{
    protected : 
        string  name ="aksh";
        int  age =19;

};
class teacher : protected student 
{
    public :
        void display()
        {
            cout<<"name of student is  : "<<name<<endl;
            cout<<"age of student is  : "<<age<<endl;
        }
}; 
int  main()
{
    teacher t;
    t.display();
    return 0; 
}
*/ 

// ex :3 using  constructor  :
/*
#include <iostream>
using namespace std;
class employees 
{
    public : 
        string name; 
        int salary; 
    employees(string n, int s)
    {
        name =n; 
        salary =s;
    }
};
class manager : public employees
{
    public :
        string department; 
    manager(string d,string n,int s):employees(n,s) // base class constructor called. 
    {
        department =d; 
    }
    void display()
    {
        cout<<"name of employee is  : "<<name<<endl;
        cout<<"salary of employee is  : "<<salary<<endl;
        cout<<"department of manager is  : "<<department<<endl;
    }
};
int main()
{
    manager m("R&d","ayush",90000); 
    m.display();
    return 0 ;
}
*/ 

// ex :4 non parameterized constructor

#include <iostream>
using namespace std;
class employees 
{
    public : 
        string name; 
        int salary; 
    employees()
    {
        name ="aksh";
        salary =90000;
    }
};
class manager : public employees
{
    public :
        string department; 
    manager(string d) // base class constructor called. 
    {
        department =d; 
    }
    void display()
    {
        cout<<"name of employee is  : "<<name<<endl;
        cout<<"salary of employee is  : "<<salary<<endl;
        cout<<"department of manager is  : "<<department<<endl;
    }
};
int main()
{
    manager m("R&d"); 
    m.display();
    return 0 ;
}