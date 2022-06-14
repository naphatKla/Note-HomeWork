
#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cin >> num1 >> num2;
	if (num1 > num2) {
		cout << "Maximum = " << num1;
	}
	else {
		if (num1 < num2) {
			cout <<"Maximum = " << num2;
		}
		else {
			if (num1 == num2) {
				cout << "Both are equal";
			}
		}
	}
}

