#include<iostream>
#include<deque>
using namespace std;

int main ()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    //for(int i:d){
        cout << endl;
    //}

    cout << "Element at first index is --> " << d.at(1) << endl;

    cout << "Front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "Size before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "after erase " << d.size() << endl;
    for (int i:d){
        cout << endl;
    }

}