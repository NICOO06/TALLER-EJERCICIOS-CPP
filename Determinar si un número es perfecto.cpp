#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) suma = suma + i;
    }

    if (suma == n) cout << 1;
    else cout << 0;

    return 0;
}
