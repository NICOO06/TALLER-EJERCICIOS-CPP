#include <iostream>
using namespace std;

int main() {
    int lista[10], n, cont = 0;

    for (int i = 0; i < 10; i++) cin >> lista[i];
    cin >> n;

    for (int i = 0; i < 10; i++) {
        if (lista[i] == n) cont++;
    }

    cout << cont;
    return 0;
}
