
#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    while (true) {
        cin >> A >> B;
        if (0 < A && A < 10) {
            if (0 < B && B < 10) {
                break;
            }
        }
    }
    cout.precision(10);
    cout << (double)A / B;
    return 0;
}