#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    switch (c) {
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
    for (int i = s.length() - 1; i >= 0; i--) {
        if (!isOperator(s[i])) {
            string tmp;
            tmp.push_back(s[i]);
            st.push(tmp);
        } else {
            string x1 = st.top();
            st.pop();
            string x2 = st.top();
            st.pop();
            string x = "(" + x1 + s[i] + x2 + ")";
            st.push(x);
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