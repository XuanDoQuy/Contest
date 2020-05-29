#include <bits/stdc++.h>
using namespace std;

void resolve(string s) {
    int j = s.length() - 1;
    while (j >= 0 && s[j] != '1') {
        s[j] = '1';
        j--;
    }
    s[j] = '0';
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        resolve(s);
    }
    return 0;
}