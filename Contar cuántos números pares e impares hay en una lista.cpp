#include <iostream>
using namespace std;

int main() {
    int a[10], pares = 0, impares = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) pares++;
        else impares++;
    }

    cout << pares << impares;
    return 0;
}
