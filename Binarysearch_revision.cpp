#include<iostream>
using namespace std; 

//creating binary search function 
int binarySearch(int arr[], int size, int key){

    //declaring start, end and mid; 
    int start = 0; 
    int end = size - 1; 
    
    int mid = (start + end)/2; 

    //giving wile condition run loop until start <= end
    while(start <= end ){
        if(key == arr[mid]){
            return mid; 
        }

        //go to right part
        if(key > arr[mid]){
            start = mid + 1; 
        }
        else{
            end = mid -1; 
        }

        mid = (start+ end) / 2; 
    }

    return -1; 

}

int main(){
    //creating arrays one even and one odd 

    int even[6] = {7 , 9, 12, 22, 26, 30}; 

    int odd[5] = {7, 9, 11, 13, 15}; 

    int evenindex = binarySearch(even, 6, 12); 
    int oddindex = binarySearch(odd, 5, 9); 

    cout << "Index of 12 is " << evenindex << endl; 

    cout << "Index of 9 is " << oddindex << endl; 

    return 0; 

}