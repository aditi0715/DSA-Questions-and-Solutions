#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    
    s.push("Sarthak"); 
    s.push("Magar"); 
    s.push("learning"); 

    cout << "The first element of stack is " << s.top() << endl;
}