#include<iostream>
using namespace std; 

/*

int main(){

    
    // we need to print 
    // ****
    // ****
    // ****
    // ****
    

   int n; 
   cin >> n; 

   int row = 1; 
   
   while(row <= n){
        int col = 1; 

        while (col <= n)
        {
            cout << "*"; 
            col = col +1; 
        }
        cout << endl; 
        row = row +1;
        
   }

}
*/

int main(){

    int n; 
    cin >> n; 

    int row = 1; 

    while(row <= n){
        int col = 1; 

        while(col <=n){
            if(row == 0 || row == n-1 || col == 0 || col == n-1)
            {
                cout << '*'; 
            }
            else 
            {
                cout << " "; 
            }
            cout << endl; 
        }
    }
    
}