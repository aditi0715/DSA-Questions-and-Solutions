#include<iostream>
#include<list>
using namespace std;

int main() 
{
    list<int> l;

    // copy list l into new list n 
    list <int> n(5, 100);
    
    // initialise new array with 5 elements with each element initialize to 100;
    //list<int> n(5, 100);

    cout << "Printing n " << endl;
    for (int i:n){
        cout << i << endl;
    }

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout << i << endl;
    }

    cout << endl;

    l.erase(l.begin()); 
    cout << "After erase " << l.size() << endl;
}