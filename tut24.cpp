#include<iostream>
using namespace std;

class Employee {
    int id; 
    static int count;

    public:
        void setData(){
            cout << "enter the id of the employee " << id << endl;
            cin >> id; 
            count ++;
        }
        void getData(){
            cout << "the id of the employee is " << id << " and the number of the employee is " << count << endl; 
        }
};

void Employee :: count; // default value is 0.

int main()
{
    Employee sarthak, adit, shikhar;

    sarthak.setData();
    sarthak.getData();

    aditi.setData();
    aditi.getData();

    shikhar.setData();
    shikhar.getData();
    
    return 0;
}