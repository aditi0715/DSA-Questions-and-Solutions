#include<iostream> 
using namespace std; 

//creating a function to print array 
void printArray(int arr[], int size){

    cout << "printing the array" << endl; 

    for(int i=0; i<size; i++){
        cout << arr[i] << " "; 
    }

    cout << "printing done " << endl; 
}

int main(){

    //initialising a array 
     
    int first[5]; 

    for(int i = 0; i<5; i++){
        first[i] = 10; 
    }
    
    printArray(first, 5); 

}