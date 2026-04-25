/*
1.


a) Compile error – pure virtual not overridden
b) B
c) Undefined behavior
d) Empty output



*/
#include <iostream>
using namespace std;
class A
{
public:
    void fn()
    {
        cout << "A::fn ";
    }
    virtual void vfn()
    {
        cout << "A::vfn ";
    }
};
class B : public A
{
public:
    void fn() 
    { 
        cout << "B::fn "; 
    }
    void vfn() 
    { 
        cout << "B::vfn "; 
    }
};
int main()
{
    A *p = new B();
    p->fn();
    p->vfn();
    delete p;
    return 0; 
}
/*
a) A::fn A::vfn
b) B::fn B::vfn
c) A::fn B::vfn
d) B::fn A::vfn
*/

/*

*/