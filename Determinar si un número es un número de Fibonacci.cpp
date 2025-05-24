#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1, f = 0;
    while (f < n) {
        f = a + b;
        a = b;
        b = f;
    }

    if (f == n || n == 0) cout << 1;
    else cout << 0;

    return 0;
}
