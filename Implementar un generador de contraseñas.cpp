#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i < 8; i++) {
        cout << rand() % 10;
    }
    return 0;
}
