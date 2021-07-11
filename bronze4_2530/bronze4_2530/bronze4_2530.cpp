#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    int C;
    int D;

    cin >> A >> B >> C;
    if (A < 0 || A > 23) {
        cin >> A >> B >> C;
    }
    else if (B < 0 || B > 59) {
        cin >> A >> B >> C;
    }
    else if (C < 0 || C > 59) {
        cin >> A >> B >> C;
    }
        
    cin >> D;
    while (D < 0 || D > 500000) {
        cin >> D;
    }

    if (D / 86400 > 0) {
        D = D % 86400;
        if (D / 3600 > 0) {
            A = A + (D / 3600);
            if (A > 23) {
                A -= 24;
            }
        }
        else if (D )
    }



