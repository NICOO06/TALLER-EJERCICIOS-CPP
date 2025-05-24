#include <iostream>
#include <string>
using namespace std;

int main() {
    string u, p;
    cin >> u >> p;

    if (u == "admin" && p == "1234") cout << 1;
    else cout << 0;

    return 0;
}
