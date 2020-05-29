#include <bits/stdc++.h>
using namespace std;

void resolve(string s) {
    string res(s.length() + 1, '0');
    int num = 1;
    s.push_back('I');
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            res[i] = num + '0';
            num++;
            int j = i - 1;
            while (s[j] == 'D'&&j>=0) {
                res[j] = num + '0';
                num++;
                j--;
            }
        }
    }
    cout << res << endl;
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