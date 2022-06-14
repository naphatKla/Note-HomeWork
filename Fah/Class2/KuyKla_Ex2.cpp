#include <iostream>
using namespace std;

int main()
{
    int Num1;
    int Num2;
    int Num3;

    cout << "Enter Number1 : ";
    cin >> Num1;
    cout << "Enter Number2 : ";
    cin >> Num2;
    cout << "Enter Number3 : ";
    cin >> Num3;
    cout << endl;

    if (Num1 > Num2)
    {
        cout << Num1 << " is maximum number";
    }
    else if (Num2 > Num3)
    {
        cout << Num2 << " is maximum number";
    }
    else
    {
        cout << Num3 << " is maximum number";
    }
}