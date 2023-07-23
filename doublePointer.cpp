#include<iostream>
using namespace std;

void update (int **p) {
    p = p+1; 

    *p = *p + 1;

    **p = **p +1; 
}

int main()
{
    int i = 5; 
    int *p = &i;
    int** p2 = &p ; 

    cout << "Printing p " << p << endl;
    cout << *p2 << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl; 

    cout << &i << endl;
    cout << p << endl; 
    cout << *p << endl;

    return 0 ;

}