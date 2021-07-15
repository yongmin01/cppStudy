#include <iostream>
using namespace std;

int main() {
	int M;
	int D;

	int M_31[7];
	M_31[0] = 1;
	M_31[1] = 3;
	M_31[2] = 5;
	M_31[3] = 7;
	M_31[4] = 8;
	M_31[5] = 10;
	M_31[6] = 12;

	int M_30[4];
	M_30[0] = 4;
	M_30[1] = 6;
	M_30[2] = 9;
	M_30[3] = 11;

	int M_28[1];
	M_28[0] = 2;

	cin >> M;
	while (M < 1 || M > 12) {
		cin >> M;
	}
	
	for (int i = 0; i < 7; i++) {
		if (M == M_31[i]) {
			cin >> D;
			while (D < 1 || D > 31) {
				cin >> D;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		if (M == M_30[i]) {
			cin >> D;
			while (D < 1 || D > 30) {
				cin >> D;
			}
		}
	}
	if (M == 2) {
		cin >> D;
		while (D < 1 || D > 28) {
			cin >> D;
		}
	}

	if (M > 2) {
		cout << "After";
	}
	else if (M == 2) {
		if (D > 18) {
			cout << "After";
		}
		else if (D == 18) {
			cout << "Special";
		}
		else cout << "Before";
	}
	else cout << "Before";

	return 0;
}