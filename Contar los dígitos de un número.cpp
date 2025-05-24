#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;

    if (n == 0) c = 1;
    else {
        while (n > 0) {
            c++;
            n = n / 10;
        }
    }

    cout << c;
    return 0;
}
