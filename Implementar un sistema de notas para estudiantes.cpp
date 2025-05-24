#include <iostream>
using namespace std;

int main() {
    float notas[5];
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        cin >> notas[i];
        suma = suma + notas[i];
    }

    cout << suma / 5;
    return 0;
}
