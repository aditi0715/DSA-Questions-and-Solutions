#include <iostream>
using namespace std;

int main()
{
    int a;
    double series;
    cin >> a;

    if (a == 0)
    {
        cout << 0 << endl;
    }
    else if (a == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i <= a; i++)
        {
            series = series + i;
            cout << series << endl;
        }
    }
}