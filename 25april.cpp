/*
vector  :dynamic array   

# define max 90 
int  a[] = {1,2,3,4,5}

push_back() ==>  add  
pop_back() ==>   remove  

vector <int> s; 
*/

// ex :1 

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

    /*
    for(i=0; i<5; i++)
        cout<<a[i]; 
    */

    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    return 0 ;
}

/*
1 element  update   ==> 23   ===> 235 
remove    ==> pop_back() 
            2. pop_back(2) 
print  vector 
*/