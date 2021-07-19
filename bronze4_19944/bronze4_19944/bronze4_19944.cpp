#include <iostream>
using namespace std;

int main() {
	unsigned int N, M;
	cin >> N >> M;
	while (true) {
		if (N < 3 || N > 1000) {
			cin >> N >> M;
		}
		else if (M < 1 || N > 1000) {
			cin >> N >> M;
		}
		else break;
	}
	if (M <= 2) {
		cout << "NEWBIE!";
	}
	else if (M <= N) {
		cout << "OLDBIE!";
	}
	else cout << "TLE!";
	
	return 0;
}