#include<iostream>
using namespace std;

class Base{
    protected: 
        int a;
    private: 
        int b;

};

class Derived : Base{

};

int main()
{
    Base b;
    Derived d;
    return 0;
}

/*
For a protected member 
                Public Derivation   Private Derivation   Protected Derivation 
1. Private      Not inherited       Not inherited        Not inherited 
2. Protected    Protected           Private              Protected 
3. Public       Public              Private              Private 
*/