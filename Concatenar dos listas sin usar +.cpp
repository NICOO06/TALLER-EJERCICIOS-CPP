#include <iostream>
using namespace std;

int main() {
    int a[3], b[3];
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];

    for (int i = 0; i < 3; i++) cout << a[i];
    for (int i = 0; i < 3; i++) cout << b[i];
    return 0;
}
