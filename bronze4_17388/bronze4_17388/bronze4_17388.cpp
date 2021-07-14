#include <iostream>
using namespace std;

int main() {
	int S;
	int K;
	int H;

	cin >> S >> K >> H;
	while (true) {
		if (S < 0 || S > 100) {
			cin >> S >> K >> H;
		}
		else if (K < 0 || K > 100) {
			cin >> S >> K >> H;
		}
		else if (H < 0 || H > 100) {
			cin >> S >> K >> H;
		}
		else if (S == K || S == H || K == H) {
			cin >> S >> K >> H;
		}
		else break;
	}

	if (S + K + H >= 100) {
		cout << "OK";
	}
	else {
		if (S < K && S < H) {
			cout << "Soongsil";
		}
		else if (K < S && K < H) {
			cout << "Korea";
		}
		else cout << "Hanyang";
	}

	return 0;
}