
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int num1; 
	int num2;
	int num3;
	//cout << num1, num2, num3;
	cin >> num1>> num2>> num3;
/*	if (num1 > num2) {
		if (num1 > num3) {
			cout << "Maximum = " << num1;
		}
		else {
			cout << "Maximum = " << num3;
		}
	}
	else {
		if (num1 < num2) {
			if (num2 > num3) {
				cout << "Maximum = " << num2;
			}
			else {
				cout << "Maximum = " << num3;
			}
		}
	} */

	cout << "Maximum = " << max({ num1,num2,num3 });
}