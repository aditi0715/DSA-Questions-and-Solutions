#include<iostream>
using namespace std;

class Bankdeposit{
    int principal;
    int year;
    float interestRate;
    float returnValue;

    public:
        Bankdeposit(){};
        Bankdeposit(int p, int y, float r);
        Bankdeposit(int p, int y , int r );
        void show();
};

Bankdeposit :: Bankdeposit(int p, int y, float r){
    principal = p;
    year = y;
    interestRate = r;
    returnValue = 0;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

Bankdeposit :: Bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void Bankdeposit :: show(){
    cout << endl << "Principle amount was " << principal << endl
    << ". Return value after " << year << " is " << returnValue << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;


    cout << "Enter the value of  p y and r " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p , y ,r); 
    bd1.show();
    return 0;
}