#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout << endl << "Inside the function " << endl;

    //Printing the array
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " <<endl;
    }
}

int main()
{
    int arr[3] = {1,3,4};

    update(arr, n); 

    cout << endl << "Printing in the main function " << endl;

    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;

}