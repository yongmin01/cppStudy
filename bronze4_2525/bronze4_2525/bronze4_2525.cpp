#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (true) {
		if (T < 1 || T > 10000) {
			cin >> T;
		}
		else break;
	}
	unsigned int A = 0;
	unsigned int B = 0;
	unsigned int C = 0;

	if (T % 10 == 0) {
		if (T / 300 > 0) {
			A = T / 300;
			T = T % 300;
			if (T / 60 > 0) {
				B = T / 60;
				T = T % 60;
				if (T / 10 > 0) {
					C = T / 10;
				}
			}
		}
		else if (T / 60 > 0) {
			B = T / 60;
			T = T % 60;
			if (T / 10 > 0) {
				C = T / 10;
			}
		}
		else if (T / 10 > 0) {
			C = T / 10;
		}
		cout << A << " " << B << " " << C;
	}
	else cout << "-1";

	return 0;
}