#include <iostream>
using namespace std;

int main() {
    int asientos[10];
    for (int i = 0; i < 10; i++) asientos[i] = 0;

    int reserva;
    for (int i = 0; i < 5; i++) {
        cin >> reserva;
        if (reserva >= 0 && reserva < 10 && asientos[reserva] == 0) {
            asientos[reserva] = 1;
        }
    }

    for (int i = 0; i < 10; i++) cout << asientos[i];
    return 0;
}
