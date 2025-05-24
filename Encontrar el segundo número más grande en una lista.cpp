#include <iostream>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];

    int max1 = a[0], max2 = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    cout << max2;
    return 0;
}
