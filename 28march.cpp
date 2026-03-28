/*
encapsulation  :means  binding data and functions together in a single unit and restricting their access to the outside world

data hiding  + control access =encapsulation 

2 methods : 
1.get  method  :  to access the private data  for  print 
2.set  method  :   to modify the  private  data. 
*/

// ex :1  without  using  get and set method . 
/*
#include <iostream>
using namespace std;
class student 
{
    private  : 
        int age; 
    public : 
        string name; 
    
    student(string n, int a)
    {
        name = n;
        age = a;
    }
    void show()
    {
        cout<<age<<endl;
    }
};
int  main()
{
    student s("john", 20);
    cout<<s.name<<endl;
    // cout<<s.age<<endl;   // private  cannot be accessed outside the class 
    s.show(); 
    return 0 ; 
}

*/ 

// ex : 2  using  get and set method .
/*
#include <iostream>
using namespace std;
class student 
{
    private  : 
        int age; 
        string name; 

    public : 
        student(string n, int a)
        {
            name = n;
            age = a;
        }
    int get_age()
    {
        return age;
    }
    string get_name()
    {
        return name; 
    }
    void set_age(int  new_age)
    {
        age = new_age;
    }
};
int  main()
{
    student s("john", 20);
    cout<<"name : "<<s.get_name()<<endl;
    cout<<"age : "<<s.get_age()<<endl;
    
    s.set_age(21); 
    cout<<"age : "<<s.get_age()<<endl;


    return 0 ; 
}
*/

// friend  function  : 
/*
friend  function is  a function that is not a member  of class but it can access the private data and  protected data of the class.

declared with  friend  keyword  in  class. 

*/

// ex :3 friend  function  : 
/*
#include <iostream>
using namespace std;
class box 
{
    private : 
        int length;
    public : 
        box(int l)
        {
            length = l;
        }
    friend void show_length(box b);
};
void show_length(box b)
{
    cout<<"length is  : "<<b.length<<endl;
}
int  main()
{
    box b(10); 
    show_length(b); 

    return 0 ;
}
*/ 

// ex :4 two class  :

#include <iostream>
using namespace std;

class B;  // forward declaration

class A 
{
    private : 
        int x; 
    public : 
        A()
        {
            x=5; 
        }
    friend void add(A,B); 
};
class B 
{
    private :
        int  y; 
    public : 
        B()
        {
            y=10; 
        }
    friend void add(A a, B b);
};
void add(A a , B b)
{
    cout<<"sum : "<<a.x + b.y  << endl ;
}

int main()
{
    A obj1 ; 
    B obj2 ;
    add(obj1, obj2);
    return 0 ;
}