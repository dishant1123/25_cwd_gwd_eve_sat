/*
template  : it  allows you to write generic and reuable code that works with different 
data type without rewriting  the  same  code  again  and  again. 


*/

// ex :1 

#include <iostream>
using namespace std;

template<typename T>  // 
T add(T a , T b)
{
    return a+b; 
}
int main()
{
    cout <<"int  : "<<add(12,3)<<endl;
    cout<<"float : "<<add(12.5,3.5)<<endl;
    cout<<"char : "<<add('o','p')<<endl;
    // cout <<"int   + folat: "<<add(12,3.45)<<endl; // error 
 
    return 0; 
}
 

// ex :2 template  using class and  object : 
/*
#include <iostream>
using namespace std;

template<class T>

class box 
{
    T value; 

    public : 
        void set_value(T v)
        {
            value =v; 
        }
    T get_value()
    {
        return value;
    }
};
int main()
{
    box<int> b; 
    b.set_value(90.90); 
    cout<<"box value is  : "<<b.get_value()<<endl;

    b.set_value(120.89); 
    cout<<"box value is  : "<<b.get_value()<<endl;

    box<string>s; 
    s.set_value("hello");
    cout<<"box value is  : "<<s.get_value()<<endl;

    s.set_value("bye");
    cout<<"box value is  : "<<s.get_value()<<endl;

    return 0; 
}
*/

// calculator using  template : 
/*
#include <iostream>
using namespace std;

template<class T>

class calculator
{
    public : 
        T add(T a , T b)
        {
            return a+b;
        }
        T sub(T a , T b)
        {
            return a-b;
        }
        T mul(T a , T b)
        {
            return a*b;
        }
};
int main()
{
    calculator<int>c;
    cout<<"int  : "<<c.add(12,3)<<endl;

    calculator<float>f;
    cout<<"float : "<<f.mul(12.5,3.5)<<endl;
    
    calculator<char>ch;
    cout<<"char : "<<ch.sub('z','h')<<endl;
    return 0 ;
}
*/ 

// multiple parameter : 
/*
#include <iostream>
using namespace std;

template<typename T, typename U>
void  display(T a , U b)
{
    cout<<"value of a is  : "<<a<<endl;
    cout<<"value of b is  : "<<b<<endl;
}

int  main()
{
    display(12,3.5);
    display("jag",20);
    return 0; 
}

*/
