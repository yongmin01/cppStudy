#include <iostream>
using namespace std;

int main() {
	unsigned int N;
	cin >> N;
	while (true) {
		if (N < 1 || N > 100) {
			cin >> N;
		}
		else break;
	}

	if (N % 2 == 0) {
		cout << (N - (N / 2 - 1)) * (N - (N / 2 - 1));

	}
	else {
		N += 1;
		cout << (N - (N / 2 - 1)) * (N - (N / 2 - 1) - 1);
	}

	return 0;

}
