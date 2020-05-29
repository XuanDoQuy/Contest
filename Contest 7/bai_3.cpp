#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        stack<char> st;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                st.push(s[i]);
            } else {
                while (!st.empty()) {
                    char c = st.top();
                    cout << c;
                    st.pop();
                }
                cout << " ";
            }
        }
        while (!st.empty()) {
            char c = st.top();
            cout << c;
            st.pop();
        }
        cout << endl;
    }
    return 0;
}