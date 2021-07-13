#include <iostream>
using namespace std;

int main()
{
    long N;
    long M;

    cin >> N >> M;
    while (N < -2000000000 || N > 2000000000 || M < -2000000000 || M > 2000000000) {
        cin >> N >> M;
    }

    if ((N - M) >= 0) {
        cout << N - M;
    }
    else cout << -1 * (N - M);
}
