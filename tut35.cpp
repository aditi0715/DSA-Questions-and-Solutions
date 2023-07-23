#include<iostream>
using namespace std;

int count=0;
class num{
    public:
        num(){
            count ++;
            cout << "This is the time when constructor is called for object number " << count << endl;
        }
        
        ~num(){
            cout << "This is the time when my destructor is called for the object number " << count << endl;
            count --;
        }
};

int main ()
{
    cout << "We are inside the main function " << endl;
    cout << "Creating first object n1 "<< endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout<< "Creating tow or more objects " << endl;
        num n2, n3;
        cout << "Exiting this block " << endl;
    }
    cout << "Back to main function" << endl;
    return 0;
}