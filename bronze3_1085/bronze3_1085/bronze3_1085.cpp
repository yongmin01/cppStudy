#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	unsigned int w, h, x, y;
	cin >> x >> y >> w >> h;

	int distance[4];
	distance[0] = x;
	distance[1] = w - x;
	distance[2] = h - y;
	distance[3] = y;
	
	cout << min({ distance[0], distance[1], distance[2], distance[3] });

	return 0;
}