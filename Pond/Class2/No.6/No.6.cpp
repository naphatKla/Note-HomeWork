
#include <iostream>
using namespace std;
int main()
{
	int cp;
	int sp;
	int result;

	cout << "Enter cost price: ";
	cin >> cp;
	cout << "Enter selling price: ";
	cin >> sp;

	result = sp - cp;

	if (result > 0) {
		cout << "Profit: " << result;
	}
	else {
		cout << "Loss: " << abs(result);
		if (result == 0) {
			cout << "Not profit Not Loss";
		}
	}
}

