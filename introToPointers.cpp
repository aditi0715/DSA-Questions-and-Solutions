#include<iostream>
using namespace std;

int main()
{
    /*
    int num = 5; 
    
    cout << num << endl;
    //address operator is & 

    cout << "The address of the num is " << &num << endl;

    int *ptr = &num;
    cout << "Printing value: " << *ptr << endl;

    double d = 4.2; 
    double *p2 = &d; 

    cout << "Address is " << p2 << endl;
    cout << "value is " << *p2 << endl;

    cout << "size of the integer is : " << sizeof(num) << endl;
    cout << "Size of the pointer is : " << sizeof(p2) << endl;
    cout << "Size of the pointer is : " << sizeof(ptr) << endl; 
    */

   int num = 5;
   int a = num; 
   cout << "Before " << a << endl;
   a++; 
   cout << "After" << a << endl;

   int *p = &num; 
   cout << "Before" << *p << endl; 
   (*p)++; 
   cout << "After" << *p << endl;

   //copying pointer 
   int *q = p;
   cout << p << " - " << num << endl;
   cout << *p << " - " << *q << endl;

    return 0;
}