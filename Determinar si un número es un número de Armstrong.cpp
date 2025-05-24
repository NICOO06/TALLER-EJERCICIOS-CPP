#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, t, d = 0, suma = 0;
    cin >> n;

    t = n;
    while (t > 0) {
        d++;
        t = t / 10;
    }

    t = n;
    while (t > 0) {
        int dig = t % 10;
        suma = suma + pow(dig, d);
        t = t / 10;
    }

    if (suma == n) cout << 1;
    else cout << 0;

    return 0;
}
