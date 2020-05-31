#include <bits/stdc++.h>
using namespace std;

/*
author : Do Quy Xuan
Date : 31/5/2020

*/

int valueChar(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/' || c == '%') return 2;
    if (c == '^') return 3;
    if (c == '(' || c == ')') return 0;
    return -1;
}

void resolve(string s) {
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            res.push_back(s[i]);
            continue;
        }
        if (s[i] == '(') {
            st.push(s[i]);
            continue;
        }
        if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                char c = st.top();
                st.pop();
                res.push_back(c);
            }
            st.pop();  // remove '('
            continue;
        }
        while (!st.empty() && valueChar(s[i]) <= valueChar(st.top())) {
            res.push_back(st.top());
            st.pop();
        }
        st.push(s[i]);
    }
    while (!st.empty()) {
        if (st.top() != '(' && st.top() != ')') {
            res.push_back(st.top());
        }
        st.pop();
    }
    cout << res << endl;
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