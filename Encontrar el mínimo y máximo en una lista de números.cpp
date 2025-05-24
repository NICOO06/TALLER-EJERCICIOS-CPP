#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int min = x, max = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < min) min = x;
        if (x > max) max = x;
    }

    cout << min << max;
    return 0;
}
