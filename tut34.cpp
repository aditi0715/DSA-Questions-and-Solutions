#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }   
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            cout << "copy constructor called" << endl;
            a = obj.a;
        }
        void display(){
            cout << "the number is " << a << endl;
        }

};

int main()
{
    Number x, y ,z(69);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    return 0;
}