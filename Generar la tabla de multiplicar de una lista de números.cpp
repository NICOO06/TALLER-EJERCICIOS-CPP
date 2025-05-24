#include <iostream>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) cin >> a[i];

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << a[i] * j;
        }
    }

    return 0;
}
