#include<iostream>
using namespace std;

int main()
{

    int arr[5]= {0};
    char ch[6] = "abcde"; 

    cout << arr << endl; 
    cout << ch << endl;

    char *c = &ch[0];

    //prints entire array
    cout << c << endl;

    char temp = ' z '
    char *p = &temp; 

    cout << p << endl;
    return 0;

}