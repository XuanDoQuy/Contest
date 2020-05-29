#include <bits/stdc++.h>
using namespace std;

bool isOp(char x) {
    switch (x) {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
    }
    return false;
}

void resolve(string s) {
    stack<string> st;
    for (int i = 0; i < s.length(); i++) {
        if (!isOp(s[i])) {
            st.push(string(1, s[i]));
        } else {
            string x1 = st.top();
            st.pop();
            string x2 = st.top();
            st.pop();
            string tmp = s[i] + x2 + x1;
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        resolve(s);
    }
    return 0;
}