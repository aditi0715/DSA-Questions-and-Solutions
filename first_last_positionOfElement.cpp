#include<iostream>
using namespace std; 

int firstOccurance(int arr[], int size, int key){

    int start = 0; 
    int end = size - 1; 
    
    int mid = start + (end - start )/2; 
    int ans = -1; 

    while(start <= end ){

        if(arr[mid] == key){
            ans = mid; 
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1; 
        }
        else if(key < arr[mid]){
            end = mid -1; 
        }
        mid = start + (end - start)/2; 
    }

    return ans; 
}

int lastOccurance(int arr[], int size, int key){

    int start = 0; 
    int end = size - 1; 
    
    int mid = start + (end - start )/2; 
    int ans = -1; 

    while(start <= end ){

        if(arr[mid] == key){
            ans = mid; 
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1; 
        }
        else if(key < arr[mid]){
            end = mid -1; 
        }
        mid = start + (end - start)/2; 
    }

    return ans; 
}

int occurrnce(int arr[], int size, int key){

    int firstIndex = firstOccurance(arr, size, key); 
    int lastIndex = lastOccurance(arr, size, key); 

    int ans = (lastIndex - firstIndex) + 1; 

    return ans; 
}

int main(){

    int arr[9] = {2, 4, 4, 4, 4, 4, 4, 5 , 6}; 

    cout << "First occurrence of element 4 is at Index:  " << firstOccurance(arr, 9, 4) << endl; 
    cout << "Last occurrence of element 4 is at Index: " << lastOccurance(arr, 9, 4) << endl;

    cout << "total occurrnce of the element is" << occurrnce(arr, 9, 4) << endl; 

    return 0; 
}