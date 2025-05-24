#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;

    for (int i = 0; i < 5; i++) {
        cin >> intento;
        if (intento == secreto) {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}
