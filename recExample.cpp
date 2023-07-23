#include<iostream>
using namespace std;

int destination(int dest, int src){

    //base case 
    if (src == dest){
        cout << "Pauch gya" << endl;
        return ;
    }


    //processing 
    src++; 
    //Recursive relation 
    reachHome(src, dest); 

}

int main()
{
    int dest = 10; 
    int src = 1; 

    destination(dest, src); 

    return 0;
}