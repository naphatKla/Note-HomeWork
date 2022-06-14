#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter Number : ";
    cin >> x;
    cout << endl;

    if (x % 2 == 0)
    {
        cout << x << " is even number";
    }
    else
    {
        cout << x << " is old number";
    }
}