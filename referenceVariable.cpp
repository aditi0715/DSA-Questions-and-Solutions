#include<iostream>
using namespace std;

void updateref (int& n){
    n++;
}

void update (int n){
    n++;
}

int main()
{

    /* 
    int i = 5;

    // creating a reference variable 

    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++; 
    cout << i << endl; 
    cout << j << endl;
    */

    int n =5; 
    
    cout << "Before: " << n <<endl;
    updateref(n); 
    cout << "After: " << n << endl;

    return 0 ;


}