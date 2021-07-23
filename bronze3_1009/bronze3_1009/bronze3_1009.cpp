#include <iostream>
#include <cmath>

using namespace std;

int main() {

	unsigned long int T, a, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b >> "\n";
		if (a < 1 || a > 1000000) {
			cin >> a >> b;
		}
		else if (b < 1 || b > 1000000) {
			cin >> a >> b;
		}
		cout << (unsigned long int)pow(a, b) % 10 << "\n";
	}
	
	return 0;
}