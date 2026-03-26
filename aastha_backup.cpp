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
/*
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
*/ 
/*
int  a[5] = {1,2,3,4,5};

b[5]=a[5];
cout<<b[0]   ==> 1  
*/

// ex :5  constructor  overload : 

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
        cout<<"default constructor called"<<endl;
    }
    student(string n)
    {
        name =n; 
        age =19; 
        cout<<"non parameterized constructor called"<<endl;
    }
    student(string n,int a)
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
int main()
{
    student s; 

    student s1("aastha");
    s1.show(); 

    student s2("yug",20); 
    s2.show();

    return 0 ;
}
*/ 

// inheritance : 

/*
single level inheritance :


*/

// #include <iostream>
// using namespace std;
// class person 
// {
//     public : 
//         string name = "yug"; 
//         int age =19;
// };
// class teacher : public person 
// {
//     public : 
//         void show()
//         {
//             cout<<"name of person is  : "<<name<<endl;
//             cout<<"age of person is  : "<<age<<endl;
//         }
// };
// int  main()
// {
//     teacher t; 
//     t.show(); 
//     return 0 ; 
// }

/*
#include <iostream>
using namespace std;
class person 
{
    public : 
        string name ; 
        int age;
    // person(string n, int a)
    // {
    //     name =n; 
    //     age =a;
    // }
    person()
    {
        name ="aastha";
        age =19;
    }
};
class teacher : public person 
{
    public : 
        string t_name;
        // teacher(string n , int a,string t) :person(n,a) //base class constructor called
        // {
        //     t_name =t; 
        // } 
        teacher(string t):person()
        {
            t_name =t;
        }
        void show()
        {
            cout<<"name of teacher is  : "<<t_name<<endl;
            cout<<"name of person is  : "<<name<<endl;
            cout<<"age of person is  : "<<age<<endl;
        }
};
int  main()
{
    // teacher t("hemlata",19,"prof.vyas");
    teacher t("prof.vyas");
    t.show(); 
    return 0 ; 
}
*/ 

// ex :2 

/*
multi ple  :                       vs  

class a :                            class a   emp 
class b :                            class b : public a   ==> b ==>a   manager
class c : public a , public b        class c : public b   ==> c ==> a,b  CEO 
*/

#include <iostream>
using namespace std;
class student 
{
    private : 
        int  rollno ; 
    protected : 
        string name ;
    public : 
    student(int r, string n)
    {
        rollno =r;
        name =n;
    }
    void show_rollno()
    {
        cout<<"rollno is  : "<<rollno<<endl;
    }
};
class teacher 
{
    public : 
        string subject ;
    teacher(string s)
    {
        subject =s;
    }
};
class clg : public student , public teacher 
{
    public : 
        string clg_name; 
    clg(int r, string n,string s,string c_n):student(r,n),teacher(s)
    {
        clg_name =c_n;
    }
    void display()
    {
        cout<<"name of clg is  : "<<clg_name<<endl;
        show_rollno(); 
        cout<<"name of  student is  : "<<name<<endl;
        cout<<"teacher subject is  : "<<subject<<endl;
    }
};
int  main()
{
    clg c(1,"aastha","computer","Nirma");
    c.display();
    return 0; 
}

