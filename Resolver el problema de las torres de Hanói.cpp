#include <iostream>
using namespace std;

void hanoi(int n, char desde, char hasta, char aux) {
    if (n == 1) {
        cout << 1;
        return;
    }
    hanoi(n - 1, desde, aux, hasta);
    cout << n;
    hanoi(n - 1, aux, hasta, desde);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}