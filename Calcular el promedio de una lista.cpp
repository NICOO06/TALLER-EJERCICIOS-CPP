#include <iostream>
using namespace std;

int main() {
    int a[5], suma = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        suma = suma + a[i];
    }
    cout << suma / 5;
    return 0;
}
