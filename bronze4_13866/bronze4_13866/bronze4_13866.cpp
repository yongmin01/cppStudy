#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int A;
	int B;
	int C;
	int D;
	int R;
	
	cin >> A >> B >> C >> D;
	while (true) {
		if (A >= 0 && A <= 10000 && B >= 0 && B <= 10000 && C >= 0 && C <= 10000 && D >= 0 && D <= 10000) {
			if (A <= B && B <= C && C <= D) {
				break;
			}
		}
		cin >> A >> B >> C >> D;
	}

	R = (A + D) - (B + C);
	if (R >= 0) {
		cout << R;
	}
	else cout << -1 * R;
}
