#include<iostream>
using namespace std;

class Hero{
    private:
    //property
    int health; 

    public: 
    char level; 

    Hero(){
        cout << "Constructor called" << endl;
    }

    void print(){
        cout << level << endl; 
    }

    //getter functions 

    int getHealth(){
        return health; 
    }

    char getLevel(){
        return level; 
    }

    //setter functions

    void setHealth(int h){
        health = h; 
    }

    void setLevel(char ch){
        level = ch; 
    }
};


int main(){

    //object created statically
    cout << "Hi" << endl;
    Hero sarthak; 
    cout << "Hello" << endl;







// static allocation 
    //creation of object 
    //Hero sarthak; 
    //cout << "Size of sarthak is: " << sizeof(sarthak) << endl; 

    //getter function to get values 
    //cout << "Health is:" << sarthak.getHealth() << endl;

    //setter function to set the value 
    //sarthak.setHealth(70);  

    //cout << "Health is: " << sarthak.getHealth() << endl;

    //cout << "Health is: " << sarthak.health << endl;
    //cout << "Level is: " << sarthak.level << endl;

    //cout << "Size: " << sizeof(h1) << endl; 
/*

// dynamic allocation 

    Hero *aditi = new Hero; 
    cout << "Health of aditi is: " << (*aditi).getHealth() << endl;
    cout << "Level of aditi is: " << (*aditi).getLevel() <<endl;

*/

    return 0;
}