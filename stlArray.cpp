#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3] = {1,2,3};

    array<int, 4> stlArray = {1,2,3,4};

    int size = stlArray.size();

    for (int i = 0; i < size; i++)
    {
        cout << stlArray[i] << endl;
    }

    cout << "Element at second index" << stlArray.at(2) << endl;
    cout << "Empty or not " << stlArray.empty() << endl;
    cout << "First Element of array " << stlArray.front() << endl;
    cout << "Last Element of array " << stlArray.back() << endl;

    
     
}