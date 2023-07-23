#include<iostream>
using namespace std;

void print(int arr[], int n, int start){

    for(int i = start; i < n; i++){
        cout << arr[i] << endl;
    }
}

int main()
{
    int  arr[5] = {1,2,3,4,9}; 

    print(arr, 5 , 2);

    return 0; 
}