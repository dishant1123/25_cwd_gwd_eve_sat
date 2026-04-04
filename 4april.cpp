/*
polymorphism  : polymorphsim  allows same function name  or operator  to behave differently based on the number of arguments

1. compile time  polymorphism : method  overloading 
2. run time  polymorphism  : method overriding . 

*/

// compile time polymorphism : 

// ex :1 
/*
#include <iostream>
using namespace std;
class math 
{
    public : 
        int add(int a, int b)
        {
            return a+b; 
        }
        int add(int a, int b, int c)
        {
            return a+b+c; 
        }
};
int main()
{
    math m; 
    cout<<m.add(12,45)<<endl;
    cout<<m.add(12,45,78)<<endl;

    return 0 ; 
}
*/ 
// ex :2 
/*
#include <iostream>
using namespace std;
class person 
{
    public : 
        string  name; 
        int age; 
    person()
    {
        cout<<"person constructor called"<<endl;
    }
    person(string n)
    {
        name =n; 
        age =20; 
        cout<<"person constructor with name called"<<endl;
    }
    person(string n, int a)
    {
        name =n; 
        age =a;
        cout<<"person constructor with name and age called"<<endl;
    }
    void show()
    {
        cout<<"name is "<<name<<" and age is "<<age<<endl;
    }
};

int main()
{
    person p1; 
    person p2("john"); 
    p2.show();

    person p3("vivan",20);
    p3.show(); 

    return 0 ;
}
*/ 

// run time  polymorphism : it happen when  derived class override a function of the base class using virtual.

/*
virtual function :run time polymorphism
virtual inheritance : 
      diamond  problem : 
          person           class person   name age 
          /    \ 
       student teacher     class student :virtual public person  ==> rollno ,  class teacher : v public p  =sub 
          \   /
          result          class result : public student , public teacher  

*/

// ex :3 
/*
#include <iostream>
using namespace std;
class animal 
{
    public : 
        virtual void sound()
        {
            cout<<"animal sound"<<endl;
        }
};
class dog: public animal
{
    public : 
        void  sound()
        {
            cout<<"dog sound"<<endl;
        }
};
class cat : public animal
{
    public : 
        void sound()
        {
            cout<<"cat sound"<<endl;
        }
};
int main()
{
    animal *a; // int  a =10 , int *p = &a ; 
    dog d;
    a=&d; 
    a->sound();
    cat c ;
    a=&c; 
    a->sound();
    
    return 0 ; 
}
*/ 

// diff :  why we use  virtual function ?   ans  : if  you don't use  virtual function  then it print  animal sound    as complie time  . when  we use  virtual function  it print dog sound  and cat sound  as run time .

/*
#include <iostream>
using namespace std;
class  base 
{
    public :
        void show()
        {
            cout<<"base class show"<<endl;
        }
};
class derived : public base
{
    public : 
        void show()
        {
            cout<<"derived class show"<<endl;
        }
}; 
int main()
{
    // derived d; 
    // d.show(); 

    base *b;  // pointer 
    derived d; 

    b=&d; 
    b->show();

    return 0 ; 
}
*/

// ex :5 operator overloading : 
/*
it  means giving speical meaning to operator like  (+ - / * %) for use defined data type class /  object. 
*/

#include <iostream>
using namespace std;
class number 
{
    public : 
        int value ; 
    number(int v)
    {
        value =v;
    }
    // operator overloading  +  

    number operator +(number n)
    {
        number temp(0); 
        temp.value = value + n.value; 
        return temp;
    }
};

int main()
{
    number a(10), b(20); 
    number result = a+b; 

    cout<<"result is : "<<result.value<<endl;
    return 0;
}