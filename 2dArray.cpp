#include<iostream>
using namespace std;

bool isPresent (int arr[][3], int target, int n, int m){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            if(arr [row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][3], int n, int m){

    cout << "Printing sum-> " << endl; 
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr [row][col] ;
        }
        cout << sum << " " ;
    }
}

int main()
{
    int arr[3][3]; 
    
    cout << "Enter the elements " << endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin >> arr [row][col] ;
        }
        cout << endl;
    }

    cout << "Printing the array " << endl; 

    for(int row = 0; row < 3; row++ ){
        for(int col =0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search " << endl; 
    int target; 
    cin >> target ; 

    if(isPresent(arr, target, 3, 3)){
        cout << "Element present " << endl; 

    }
    else {
        cout << "Element not present " << endl;
    }

    printSum(arr, 3, 3);

    return 0;
}