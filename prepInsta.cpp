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

    int i,j,l; 

    cin >> l;

    for(int i =0; i<l; i++){ // outer loop

        for(int j=0; j<l; j++){//for inner loop 

            if(i == 0|| i == l-1 || j == 0 || j == l -1){
                cout << "*"; 
            }
            else{
                cout << " "; 
            }
        } 
        cout << endl ; 
    }
}







