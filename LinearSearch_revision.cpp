#include<iostream>
using namespace std; 

bool search(int arr[], int size, int key){

    // lenearly searching the elements in the array 
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            cout << "The index of key is: " << i << endl; 
            return 1; 
        }
    }
    return 0; 
}

int reverse(int arr[], int size){
    int start = 0;
    int end = size-1; 

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int reverseAlternate(int arr[], int size){
    int start = 0; 
    int end = start + 1; 

    // 1 2 3 4  => 2 1 4 3
    // 1 2 3 4 5
    while(end <= size-1){
        swap(arr[start], arr[end]);
            start = start + 2;
            end = end + 2;
    }
    
}

int findDuplicate(int arr[], int size){

    cout << "Entering the function " << endl; 
    //  1 2 2 4 5 5
    int count = 0;
    int ans[1000]; 

    for(int i =0; i< size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                ans[0] = arr[i];
                count++;
            }
        }
    }
    printArray(ans, count); 
}

int main(){

    int arr[10] = {12, 10, 10, 0, 4, 4, 18, -8, 47, 51}; 
    int arr1[5] = {10,5,4,6,-7}; 

    // reverse(arr, 10); 
    // reverse(arr1, 5); 

    // reverseAlternate(arr, 10);
    // reverseAlternate(arr1, 5);

    findDuplicate(arr, 10);
    findDuplicate(arr1, 5);


     printArray(arr, 10);
     printArray(arr1, 5);


    // cout << "Enter the element to search for " << endl;

    // int key;
    // cin >> key; 

    // bool found = search(arr, 10, key);

    // if(found){
    //     cout << "The key is present" << endl; 
    // }else {
    //     cout << "The key is absent" << endl; 
    // }

    return 0; 
}