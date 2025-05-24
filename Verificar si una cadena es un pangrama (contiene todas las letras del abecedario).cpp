#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int letras[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') letras[s[i] - 'a'] = 1;
        if (s[i] >= 'A' && s[i] <= 'Z') letras[s[i] - 'A'] = 1;
    }
    int total = 0;
    for (int i = 0; i < 26; i++) total = total + letras[i];
    if (total == 26) cout << 1;
    else cout << 0;
    return 0;
}
