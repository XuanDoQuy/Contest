#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll convertToLong(string s) {
    ll num = 0;
    for (int i = 0; i < s.length(); i++) {
        num = 10 * num + (s[i] - '0');
    }
    return num;
}

void solve(int n) {
    queue<string> q;
    q.push("9");
    while (true) {
        string s = q.front();
        q.pop();
        string s2 = s;
        if (convertToLong(s) % n == 0) {
            cout << s << endl;
            break;
        }
        q.push(s.append("0"));
        q.push(s2.append("9"));
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}