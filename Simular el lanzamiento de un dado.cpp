#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    cout << (rand() % 6 + 1);
    return 0;
}
