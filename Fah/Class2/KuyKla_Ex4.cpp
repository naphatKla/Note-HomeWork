#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter Number : ";
    cin >> x;
    cout << endl;

    if (x % 5 == 0)
    {
        if (x % 11 == 0)
        {
            cout << x << " can divide by 5 and 11";
        }
        else
        {
            cout << x << " can't divide by 5 and 11";
        }
    }
    else
    {
        cout << x << " can't divide by 5 and 11";
    }
}
