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
        bool flag;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ')') {
                st.push(s[i]);
            } else {
                flag = true;  // mac dinh cap ngoac la sai;
                char c = st.top();
                st.pop();
                while (c != '(') {
                    if (c == '+' || c == '-' || c == '*' || c == '/') {
                        flag = false;
                    }
                    c = st.top();
                    st.pop();
                }
                if (flag == true) {
                    break;
                }
            }
        }
        if (flag == false)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}