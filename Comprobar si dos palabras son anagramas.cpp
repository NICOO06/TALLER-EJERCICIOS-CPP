#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int c1[26] = {}, c2[26] = {};
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) c1[a[i] - 'a']++;
    for (int i = 0; i < b.length(); i++) c2[b[i] - 'a']++;

    int iguales = 1;
    for (int i = 0; i < 26; i++) {
        if (c1[i] != c2[i]) iguales = 0;
    }

    cout << iguales;
    return 0;
}
