#include <iostream>
using namespace std;

int main() {
	int A, B, C, D;

	cin >> A >> B;
	while (true) {
		if (A < 0 || A > 1000) {
			cin >> A >> B;
		}
		else if (B < 0 || B > 1000) {
			cin >> A >> B;
		}
		else break;
	}
	cin >> C >> D;
	while (true) {
		if (C < 0 || C > 1000) {
			cin >> C >> D;
		}
		else if (D < 0 || D > 1000) {
			cin >> C >> D;
		}
		else break;
	}

	int sol1 = A + D;
	int sol2 = B + C;

	if (sol1 >= sol2) {
		cout << sol2;
	}
	else cout << sol1;

	return 0;
}