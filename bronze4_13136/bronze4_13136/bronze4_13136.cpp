#include <iostream>
using namespace std;

int main()
{
    long R;
    long C;
    long N;

    cin >> R >> C >> N;
    while (R < 1 || R > 1000000 || C < 1 || C > 1000000 || N < 1 || N > 1000000) {
        cin >> R >> C >> N;
    }

    long hang;
    long yeaol;
    
    if (R % N == 0) {
        hang = R / N;
    }
    else hang = R / N + 1;
    
    if (C % N == 0) {
        yeaol = C / N;
    }
    else yeaol = C / N + 1;
    

    cout << hang * yeaol;
}
