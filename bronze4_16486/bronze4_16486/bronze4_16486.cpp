#include <iostream>
using namespace std;

int main() {
	unsigned int d1, d2;
	float p = 3.141592f;

	cin >> d1;
	while (true) {
		if (d1 <= 0 || d1 > 100000) {
			cin >> d1;
		}
		else break;
	}
	cin >> d2;
	while (true) {
		if (d2 <= 0 || d2 > 100000) {
			cin >> d2;
		}
		else break;
	}

	float result = (d1 * 2) + (d2 * 2 * p);
	cout.precision(8);
	cout << result;

	return 0;

}