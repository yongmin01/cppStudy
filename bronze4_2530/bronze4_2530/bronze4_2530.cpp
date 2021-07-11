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
            D = D % 3600;
            if (D > 60) {
                B = B + (D / 60);
                D = D % 60;
                C = C + D;
            }
            else C = C + D;
        }
        else if (D / 60 > 0) {
            B = B + (D / 60);
            D = D % 60;
            C = C + D;
        }
        else C = C + D;
    }
    else if (D / 3600 > 0) {
        A = A + (D / 3600);
        D = D % 3600;
        if (D > 60) {
            B = B + (D / 60);
            D = D % 60;
            C = C + D;
        }
        else C = C + D;
    }
    else if (D / 60 > 0) {
        B = B + (D / 60);
        D = D % 60;
        C = C + D;
    }
    else C = C + D;


    if (C > 59) {
        C = C - 60;
        B = B + 1;
    }
    if (B > 59) {
        B = B - 60;
        A = A + 1;
    }
    if (A > 23) {
        A = A - 24;
    }
    cout << A << ' ' << B << ' ' << C;
}



