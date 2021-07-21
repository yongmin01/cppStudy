#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (true) {
		if (N == 0 || N == 1) {
			break;
		}
		else cin >> N;
	}
	if (N == 0) {
		cout << "YONSEI";
	}
	else if (N == 1) {
		cout << "Leading the Way to the Future";
	}
	
	return 0;
}