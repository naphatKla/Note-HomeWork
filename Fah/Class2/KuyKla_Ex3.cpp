#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter Number : ";
    cin >> x;
    cout << endl;

    if (x == 0)
    {
        cout << x << " is equal to 0";
    }
    else
    {
        if (x > 0)
        {
            cout << x << " is more than 0";
        }
        else
        {
            cout << x << " is less than 0";
        }
    }
}