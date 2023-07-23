#include<iostream>
#include<stack>
using namespace std; 

class stack{ 

    //properties 
    public: 
        int *arr; 
        int top; 
        int size; 

    // behaviour 
    stack(int size ) { 
        this -> size  = size ; 
        arr = new int[size ]; 
        top = -1;  
    }

    void push( int element ){ 
        if(size - top > 1){
            top++; 
            arr[top] = element; 
        }
        else 
        {
            cout << " Stack overflow " << endl ;
        }
    }

    void pop() { 
        if(top >=0){
            top--; 
        }
        else
        {
            cout << "Stack Underflow " << endl; 
        }
    }

    int peek(){ 
        if(top >= 0 && top < size)
        return arr[top]; 
        else 
        { 
            cout << " Stack is empty " << endl ; 
        }
    }   

    bool is empty(){
        if(top == -1 )
            return true; 
        else 
        { 
            return false; 
        }
    }

};

int main() { 

    /*
    //creation of stack 
    stack<int> s; 

    //push operation 
    s.push(2); 
    s.push(5); 

    //pop operation 
    s.pop(); 

    cout << "Printing top element " << s.top() << endl; 

    if(s.empty()){
        cout << "Stack is empty " << endl; 
    }
    else 
    {
        cout << "Stack is not empty " << endl; 
    }

    cout << "Size of stack is " << s.size() << endl; 

    */
    return 0; 

}