#include <iostream>
using namespace std;


int main()
{
    long A;
    long B;
    long C;
    long D;
    long P;

    long X;
    long Y;

    cin >> A;
    while (A < 1 || A > 10000) {
        cin >> A;
    }
    cin >> B;
    while (B < 1 || B > 10000) {
        cin >> B;
    }
    cin >> C;
    while (C < 1 || C > 10000) {
        cin >> C;
    }
    cin >> D;
    while (D < 1 || D > 10000) {
        cin >> D;
    }
    cin >> P;
    while (P < 1 || P > 10000) {
        cin >> P;
    }

    X = A * P;
    if (P > C) {
        Y = B + (P - C) * D;
    }
    else Y = B;

    if (X >= Y) {
        cout << Y;
    }
    else cout << X;
}
