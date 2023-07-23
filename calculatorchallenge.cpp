#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
    protected: 
        int number1;
        int number2;
    public:
        void getDataSimple(){
            cout << "Enter the value of a" << endl;
            cin >> number1;
            cout << "Enter the value of b" << endl;
            cin >> number2;            
        }

        void performOperations(){
            cout << "The value of number1 + number2 is " << number1 + number2 << endl;
            cout << "The value of number1 - number2 is " << number1 - number2 << endl;
            cout << "The value of number1 * number2 is " << number1 * number2 << endl;
            cout << "The value of number1 / number2 is " << number1 / number2 << endl;
        }
        
};

class ScientificCalculator{
    int number1, number2;
    public:
        void getDataScientific(){
            cout << "Enter the first number: " << endl;
            cin >> number1;
            cout << "Enter the second number: " << endl;
            cin >> number2;
        }

        void scientificOperations(){
            cout << "The value of cos(number1) is: " << cos(number1) << endl;
            cout << "The value of sin(number1) is: " << sin(number1) << endl;
            cout << "The value of tan(number1) is: " << tan(number1) << endl;

            cout << "The value of cos(number2) is: " << cos(number2) << endl;
            cout << "The value of sin(number2) is: " << sin(number2) << endl;
            cout << "The value of tan(number2) is: " << tan(number2) << endl;
        }
};

class HybridCalculator : public simplecalculator, public ScientificCalculator{
    
};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.scientificOperations();

    calc.getDataSimple();
    calc.performOperations();
    return 0;
}




