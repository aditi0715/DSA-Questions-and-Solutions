#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout << "Size of array is " << n << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";

    }cout << endl;
}

int linearSearch(int *arr, int size, int key){
    print(arr, size);
    //base case 
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr + 1, size -1, key); 
        return remainingPart; 
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5}; 
    int size = 5;
    int key = 9; 
    bool ans = linearSearch(arr , size , key);

    if(ans){
        cout << "Present " << endl;
    }
    else {
        cout << "Absent " << endl;
    }

    return 0; 
}