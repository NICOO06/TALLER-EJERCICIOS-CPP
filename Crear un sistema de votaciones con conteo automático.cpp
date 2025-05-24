#include <iostream>
using namespace std;

int main() {
    int votos[3] = {0, 0, 0};
    int voto;

    for (int i = 0; i < 5; i++) {
        cin >> voto;
        if (voto >= 1 && voto <= 3) votos[voto - 1]++;
    }

    for (int i = 0; i < 3; i++) {
        cout << votos[i];
    }

    return 0;
}
