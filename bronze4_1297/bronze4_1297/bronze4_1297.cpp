#include <iostream>
using namespace std;

int main()
{
    int minkook[4];
    int mansae[4];

    int S = 0;
    int T = 0;

    for (int i = 0; i <= 3; ++i) {
        cin >> minkook[i];
    }

    for (int i = 0; i <= 3; ++i) {
        cin >> mansae[i];
    }

    for (int i = 0; i <= 3; ++i) {
        S += minkook[i];
        T += mansae[i];
    }

    if (S >= T) {
        cout << S;
    }
    else cout << T;

    return 0;
}


