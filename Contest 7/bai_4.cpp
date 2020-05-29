#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        stack<char> st;
        bool ok = false;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
                continue;
            }
            if (st.empty()) {
                ok = true;
                break;
            } else {
                if (s[i] == ')' && st.top() == '(') {
                    st.pop();
                }
                if (s[i] == ']' && st.top() == '[') {
                    st.pop();
                }
                if (s[i] == '}' && st.top() == '{') {
                    st.pop();
                }
            }
        }
        if (ok) {
            cout << "NO" << endl;
            continue;
        }
        if (st.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}