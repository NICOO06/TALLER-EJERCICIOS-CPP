#include <iostream>
using namespace std;

int main() {
    int a[10], maxrep = 0, masrepetido = 0;

    for (int i = 0; i < 10; i++) cin >> a[i];

    for (int i = 0; i < 10; i++) {
        int rep = 0;
        for (int j = 0; j < 10; j++) {
            if (a[i] == a[j]) rep++;
        }
        if (rep > maxrep) {
            maxrep = rep;
            masrepetido = a[i];
        }
    }

    cout << masrepetido;
    return 0;
}
