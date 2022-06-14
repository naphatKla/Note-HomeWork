#include <iostream>
using namespace std;

int main()
{
    int cost;
    int sell;

    cout << "Enter Cost : ";
    cin >> cost;
    cout << "Enter Sell : ";
    cin >> sell;

    if (sell - cost > 0)
    {
        cout << "Profit : " << sell - cost;
    }
    else
    {
        cout << "Lost : " << sell - cost;
    }
}
