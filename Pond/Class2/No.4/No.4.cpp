
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any number: ";
    int num;
    cin >> num;
    if (num % 5 == 0) {
        if (num % 11 == 0) {
            cout << "Number is divisible by 5 and 11";
        }
        else {
            cout << "Number is not divisible by 5 and 11";
        }
    }
}
