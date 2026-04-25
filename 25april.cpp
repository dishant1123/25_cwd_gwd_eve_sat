/*
vector  :dynamic array   

# define max 90 
int  a[] = {1,2,3,4,5}

push_back() ==>  add  
pop_back() ==>   remove  

vector <int> s; 
*/

// ex :1 
/*
#include <iostream>
#include <vector>
using namespace std;
int  main()
{
    vector <int>s; 

    s.push_back(23);    // int  a[50] = {1,2,3,4,5}
    s.push_back(45);
    s.push_back(67);
    s.push_back(89);

    
    //for(i=0; i<5; i++)
    //    cout<<a[i]; 
    

    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" ";
    }

    return 0 ;
}
*/ 

/*
1 element  update   ==> 23   ===> 235 
remove    ==> pop_back() 
            2. pop_back(2) 
print  vector 
*/

// ex :2 
/*
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    vector <int>s;
    s.push_back(230);
    s.push_back(45);
    s.push_back(67);
    s.push_back(89);

    cout <<"before sorting vectore  element  is  : "<<endl;

    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" "<<endl;
    }

    // sort(s.begin(), s.end()); 

    sort(s.begin(),s.end(),greater<int>());
    cout<<"after sorting vectore  element  is  : "<<endl;
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" "<<endl;
    }
    return 0; 

}
*/ 
/*
    int  a[5] = {1,2,2,3,4}

*/

// ex:3 
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int>s ={10,2,2,3,3,4,4,5};

    sort(s.begin(), s.end());  // {2,2,3,3,4,4,5,10}

    s.erase(unique(s.begin(), s.end()),s.end());  // {2,3,4,5,10}

    cout<<"unique element  is  : "<<endl;
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    return 0; 

}
*/ 

// class object vector : 

#include <iostream>
#include <vector>
using namespace std;
class student 
{
    public :
        string  name ; 
        int  age; 
    student(string n , int a)
    {
        name =n; 
        age =a;
    }
    void  display()
    {
        cout<<"name is  : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int main()
{
    vector <student> s;

    s.push_back(student("vivan",20));
    s.push_back(student("yug",19));
    s.push_back(student("aastha",17));

    for(auto i :s)
    {
        i.display();
    }
    return 0;
}