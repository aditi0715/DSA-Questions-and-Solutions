#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout << "HOW are you?"<<endl;
        }
};

class Base2{
    public: 
        void greet(){
            cout << "Kaise ho?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }
};


int main(){

    Derived d;
    Base1 b1;
    Base2 b2;

    b1.greet();
    b2.greet();
    d.greet();
    return 0;
}