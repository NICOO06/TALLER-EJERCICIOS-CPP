#include <iostream>
using namespace std;

int main() {
    int puntos[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> puntos[i];
        total = total + puntos[i];
    }

    cout << total;
    return 0;
}
