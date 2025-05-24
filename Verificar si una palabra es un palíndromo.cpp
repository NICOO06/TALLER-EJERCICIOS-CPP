#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cin >> palabra;
    bool es = true;

    for (int i = 0; i < palabra.length() / 2; i++) {
        if (palabra[i] != palabra[palabra.length() - 1 - i]) {
            es = false;
        }
    }

    if (es) cout << 1;
    else cout << 0;

    return 0;
}
