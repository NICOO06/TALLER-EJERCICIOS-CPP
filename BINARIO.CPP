#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int binario[32];
    int i = 0;

    if (num == 0) {
        cout << 0;
        return 0;
    }

    while (num > 0) {
        binario[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }

    return 0;
}
