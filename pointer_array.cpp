#include<iostream>
using namespace std;

int main()
{
    /*
    int arr[10] = {2,5,6}; 

    // printing address of memory block
    cout << "Address of first memory block is " << arr << endl; 

    // Printing address of memory block using & operator
    cout << "Address of first memory block using & " << &arr[0] << endl;

    // accessing first element of array 
    cout << arr[0] <<endl;

    cout << "Next experiment: " << *arr << endl;
    cout << "experiment 5: " << *arr +1 << endl;
    cout << "experiment 6: " << *(arr +1) << endl;
    */

    int temp[10]; 
    int *ptr = temp; 

    cout << sizeof(temp) << endl;
    cout << ptr << endl;
    cout << temp << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(&ptr) << endl;
    


    return 0; 
}