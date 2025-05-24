#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int letras[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') letras[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        cout << letras[i];
    }

    return 0;
}
