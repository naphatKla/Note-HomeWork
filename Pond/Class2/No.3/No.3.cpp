
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter any number: ";
	cin >> num;
	if (num > 0) {
		cout << num  << "Number is Positive\n";
	}
	if (num < 0) {
		cout << num  << "Number is Negative\n";
	}
	if (num == 0) {
		cout << num  << "Number is Zero\n";
	}
}

