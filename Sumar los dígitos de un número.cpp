#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cin >> n;

    while (n > 0) {
        suma = suma + n % 10;
        n = n / 10;
    }

    cout << suma;
    return 0;
}
