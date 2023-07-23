#include<iostream>
using namespace std; 

int getMax(int num[], int n){

    int maxi = INT_MIN; 

    for(int i=0; i<n; i++){

        maxi = max(maxi , num[i]);

        // if(num[i] > max){
        //     max = num[i]; 
        // }
    }

    return maxi; 
}

int getMin(int num[], int n){
    int mini = INT_MAX; 

    for(int i=0; i<n; i++){

        mini = min(mini, num[i]);
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    return mini; 
}

int sumOfArray(int num[], int n){

    cout << "Inside the sum function " << endl; 

    int sum = 0; 
    for(int i=0; i<n; i++){
        sum = sum + num[i];
    }
    
    return sum; 
}

int main(){
    // create a array of size 5 with values [8,12,4,10]

    int size; 
    cin >> size; 

    int num[100]; 

    //taking input in array 
    for(int i=0; i<size; i++){
        cin >> num[i]; 
    }

    cout << "The sum of the array is " << sumOfArray(num , size) << endl; 

   // cout <<"The maximum value is " << getMax(num, size)<< endl;
    //cout << "The minimum value is "<< getMin(num, size)<< endl; 
}


