#include <iostream>
using namespace std;

int main() {
	unsigned int a, b, c;
	cin >> a;
	while (true) {
		if (a <= 0 || a >= 180) {
			cin >> a;
		}
		else break;
	}

	cin >> b;
	while (true) {
		if (b <= 0 || b >= 180) {
			cin >> b;
		}
		else break;
	}

	cin >> c;
	while (true) {
		if (c <= 0 || c >= 180) {
			cin >> c;
		}
		else break;
	}

	if (a == 60 && b == 60 && c == 60) {
		cout << "Equilateral";
	}
	else if (a + b + c == 180) {
		if (a == b || b == c || c == a) {
			cout << "Isosceles";
		}
		else if (a != b && b != c && c != a) {
			cout << "Scalene";
		}
	}
	else cout << "Error";

	return 0;
}