#include <iostream>
using namespace std;
int main()
{
    	/* variables declaration */
    	int num_1, fact_1 = 1;
	int n = 1;
	cout << "Enter an integer to calculate the factorial of:" << endl;
   	cin >> num_1;
    	/* finding the factorial using the while loop */
    	while(n <= num_1)
    	{
        		fact_1 = fact_1 * n;
        		n ++;
    	}
	cout << "Factorial of the given integer is : " << fact_1 << endl;
	return 0;
}