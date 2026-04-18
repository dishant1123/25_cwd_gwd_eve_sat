/*

diff  ==> method  overloading , method  over riding
method  riding  :

1. without virtual function  :
    class animal
            void  sound()
    class dog : public animal
         void  sound()
    class cat : public animal
         void  sound()
cat c    ==> c.sound()  ==> cat sound

animal *a;  cat c ;  a =&c    ==> a->sound()   ==> ??

2. with virtual function  :
    class animal
           virtual void  sound() cout<<"animal sound"<<endl;
    class dog : public animal
         virtual void  sound()   cout<<"dog sound"<<endl;
    class cat : public animal
         virtual void  sound()   cout<<"cat sound"<<endl;

animal *a;  cat c ;  a =&c    ==> a->sound()   ==> ??

====================================================
class Base
{
    public:
    void show(int x)
    {
        cout << "Base:" << x << " ";
    }
};
class Derived : public Base
{
public:
    void show(double x)
    {
        cout << "Derived:" << x << " ";
    }
};
int main()
 {
    Derived d;
    d.show(5);
}
a) Base:5
b) Derived:5
c) Compile error
d) Base:5 Derived:5

s :b   p   suhani   yug    kath    ar    aksh    viv   r   jag

*/

/*
#include <iostream>
using namespace std;
class Base
{
public:
     int val()
    {
        return 1;
    }
};
class Mid : public Base
{
public:
    int val()  
    { 
            return Base::val() + 1; 
    }
};
class Top : public Mid
{
public:
    int val()  
    { 
        return Mid::val() + 1; 
    }
};
int main()
{
    Base *b = new Top(); 
    cout << b->val();
}

// 1 2 3 none 
*/ 

/*
abtraction  : means hiding implementations  detalis and  showing only essential features  of user.

ex : real  life  example  : car  ==> streeing  ,break , cluch,accelerate  
                             ===> engine  how  work   ==> ??? 

1. pure  virtual  function  :   it declares with zero. no implementation in base class. 

1.using  classes (access specifier == > public , private , protetced)  :
2.using  abstract class  ==> pure virtual function
*/

// ex :1 
/*
#include <iostream>
using namespace std;
class shape 
{
    public : 
        virtual void area() = 0;
};
class circle : public shape
{   
    public :
        int radius;
    circle(int r)
    {
        radius = r;
    } 
    void  area()
    {
        cout<<"area of circle is "<<3.14*radius*radius<<endl;
    }
};
class rectangle : public shape
{
    public : 
        int length, breadth;
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void  area()
    {
        cout<<"area of rectangle is "<<length*breadth<<endl;
    }
};
int  main()
{
    shape *s = new circle(8); 
    s->area(); 

    shape *s1 = new rectangle(10,20);
    s1->area();

    return 0 ;

}
*/

/*

virtual function  : 
class animal 
     public : 
         virtual void sound 
             cout << "animal sound" << endl;

class dog : public animal
    public : 
        void sound
           cout << "dog sound" << endl;


pure virtual function  :

class animal  
    public :
        virtual void sound() = 0;

class dog : public animal
    public :
        void sound() 
            cout << "dog sound" << endl;

*/

// ex :2 bank : 

#include <iostream>
using namespace std;
class bankaccount 
{
    protected : 
        string name ;
        int  accno ; 
        int  balance ; 
    public : 
        bankaccount(string n, int a, int b)
        {
            name =n; 
            accno =a;
            balance =b;
        }
    virtual void cal_int() =0; 
    void  display()
    {
        cout<<"name is  : "<<name<<endl;
        cout<<"accno is : "<<accno<<endl;
        cout<<"balance is : "<<balance<<endl;
    }
};
class savings : public bankaccount
{
    public : 
        savings(string n, int a, int b) : bankaccount(n,a,b)
        {
        }
    void  cal_int()
    {
        int interest = balance * 0.04; 
        cout<<"interest is with 4 % : "<<interest<<endl;
    }
};
class current : public bankaccount
{
    public : 
        current(string n, int a, int b) : bankaccount(n,a,b)
        {
        }
    void  cal_int()
    {
        cout<<"interest is with no int. % : "<<endl;
    }
};

int main()
{
    bankaccount *b;

    savings s("vivan",123456,10000);
    b= &s; 
    b->display();
    b->cal_int();

    current c("yug",123456,90000);
    b= &c;
    b->display();
    b->cal_int();
    return 0 ;

}