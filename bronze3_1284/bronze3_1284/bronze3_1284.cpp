#include <iostream>
#include <string>
using namespace std;

int main() {
	while (true) {
		string N;
		cin >> N;
		int result = 0;
		if (N == "0") {
			break;
		}
		else {
			for (int i = 0; i < N.length(); i++) {
				if (N[i] == '0') {
					result += 4;
				}
				else if (N[i] == '1') {
					result += 2;
				}
				else result += 3;
			}
			cout << result + 2 + (N.length() - 1) << "\n";
		}
	}
	return 0;
}