#include <iostream>
using namespace std;

int main()
{   
    int L;
    int A;
    int B;
    int C;
    int D;

    int m_mok = 0;
    int k_mok = 0;

    
    
    cin >> L;
    while (L < 2 || L > 40) {
        cin >> L;
    }

    cin >> A;
    while (A < 1 || A > 1000) {
        cin >> A;
    }

    cin >> B;
    while (B < 1 || B > 1000) {
        cin >> B;
    }

    cin >> C;
    while (C < 1 || C > 100) {
        cin >> A;
    }

    cin >> D;
    while (D < 1 || D > 100) {
        cin >> D;
    }

    if (B % D == 0) {
        m_mok += B / D;
    }
    else m_mok = B / D + 1;

    if (A % C == 0) {
        k_mok += A / C;
    }
    else k_mok = A / C + 1;

    cout << L - max(m_mok, k_mok);

    /*
    cin >> L;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    if (2 <= L <= 40) {
        if (1 <= A <= 1000) {
            if (1 <= B <= 1000) {
                if (1 <= C <= 100) {
                    if (1 <= D <= 100) {
                        if (B %)
                    }
                }
            }
        }
    }
    */
}