#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxh; 

    // min heap 
    priority_queue<int, vector<int>, greater<int> > minh;

    maxh.push(1);
    maxh.push(2);
    maxh.push(5);
    maxh.push(6);
    maxh.push(7);

    cout << "Size of the heap is " << maxh.size() << endl;
    int n = maxh.size();
    for(int i =0; i < n; i++){
        cout << maxh.top() << endl;
        maxh.pop();
    }cout << endl;
}