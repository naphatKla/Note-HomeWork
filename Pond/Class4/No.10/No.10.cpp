#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int num;
    cout << "enter number: ";
    cin >> num;

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            cout << " * ";
        }
        cout << "\n";
    }
}