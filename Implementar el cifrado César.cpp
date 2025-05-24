#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = 'a' + (s[i] - 'a' + k) % 26;
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = 'A' + (s[i] - 'A' + k) % 26;
        cout << s[i];
    }

    return 0;
}
