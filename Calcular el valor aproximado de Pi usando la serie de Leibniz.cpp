#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double pi = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) pi = pi + 1.0 / (2 * i + 1);
        else pi = pi - 1.0 / (2 * i + 1);
    }

    pi = pi * 4;
    cout << pi;
    return 0;
}
