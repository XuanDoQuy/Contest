#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        stack<char> st;
        string s;
        int m = 0, n = 0;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                if (s[i] == ')' && st.top() == '(') {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }
        while (!st.empty()) {
            char c = st.top();
            st.pop();
            if (c == ')') m++;
            if (c == '(') n++;
        }
        cout << m / 2 + m % 2 + n / 2 + n % 2 << endl;
    }
    return 0;
}