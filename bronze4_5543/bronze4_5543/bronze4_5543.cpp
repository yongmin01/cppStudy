#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	unsigned int buger[3];
	unsigned int bev[2];

	cin >> buger[0];
	while (true) {
		if (buger[0] < 100 || buger[0] > 2000) {
			cin >> buger[0];
		}
		else break;
	}
	cin >> buger[1];
	while (true) {
		if (buger[1] < 100 || buger[1] > 2000) {
			cin >> buger[1];
		}
		else break;
	}
	cin >> buger[2];
	while (true) {
		if (buger[2] < 100 || buger[2] > 2000) {
			cin >> buger[2];
		}
		else break;
	}

	cin >> bev[0];
	while (true) {
		if (bev[0] < 100 || bev[0] > 2000) {
			cin >> bev[0];
		}
		else break;
	}
	cin >> bev[1];
	while (true) {
		if (bev[1] < 100 || bev[1] > 2000) {
			cin >> bev[1];
		}
		else break;
	}

	cout << min({ buger[0], buger[1], buger[2] }) + min({ bev[0], bev[1] }) - 50;

	return 0;
}