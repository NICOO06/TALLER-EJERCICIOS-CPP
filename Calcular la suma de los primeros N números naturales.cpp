#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }

    cout << suma;
    return 0;
}
