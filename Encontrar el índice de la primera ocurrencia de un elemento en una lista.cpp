#include <iostream>
using namespace std;

int main() {
    int a[10], x;
    for (int i = 0; i < 10; i++) cin >> a[i];
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (a[i] == x) {
            cout << i;
            break;
        }
    }

    return 0;
}
