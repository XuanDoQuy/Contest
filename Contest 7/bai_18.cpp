#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isOp(char c) {
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
    }
    return false;
}

bool isBrk(char c) {
    if (c == '(' || c == ')')
        return true;
    else
        return false;
}

int valueOp(string s) {
    if (s == "+" || s == "-") return 1;
    if (s == "*" || s == "/") return 2;
    return 0;
}

ll parseInt(string s) {
    ll res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = 10 * res + (s[i] - '0');
    }
    return res;
}

vector<string> splitString(string s) {
    vector<string> vs;
    string tmp;
    for (int i = 0; i < s.length(); i++) {
        if (isOp(s[i]) || isBrk(s[i])) {
            if (!tmp.empty()) {
                vs.push_back(tmp);
            }
            vs.push_back(string(1, s[i]));
            tmp.clear();
        } else {
            tmp.push_back(s[i]);
        }
    }
    if (!tmp.empty()) vs.push_back(tmp);
    // for (int i = 0; i < vs.size(); i++) {
    //     cout << vs[i] << " ";
    // }
    // cout << endl;
    return vs;
}

vector<string> convertToPostfix(vector<string> vs) {
    vector<string> res;
    stack<string> st;
    for (int i = 0; i < vs.size(); i++) {
        if (vs[i] == "(") {
            st.push(vs[i]);
            continue;
        }
        if (vs[i] == ")") {
            while (!st.empty() && st.top() != "(") {
                res.push_back(st.top());
                st.pop();
            }
            st.pop();  // remove "(";
            continue;
        }
        if (isOp(vs[i].at(0))) {
            while (!st.empty() && valueOp(vs[i]) <= valueOp(st.top())) {
                res.push_back(st.top());
                st.pop();
            }
            st.push(vs[i]);
            continue;
        }
        res.push_back(vs[i]);
    }
    while (!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    return res;
}

void resolve(string s) {
    vector<string> vs, spl;
    stack<ll> st;
    spl = splitString(s);
    vs = convertToPostfix(spl);
    // for (int i = 0; i < vs.size(); i++) {
    //     cout << vs[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < vs.size(); i++) {
        if (!isOp(vs[i].at(0))) {
            st.push(parseInt(vs[i]));
        } else {
            ll x1 = st.top();
            st.pop();
            ll x2 = st.top();
            st.pop();
            ll x;
            switch (vs[i].at(0)) {
                case '+':
                    x = x2 + x1;
                    break;
                case '-':
                    x = x2 - x1;
                    break;
                case '*':
                    x = x2 * x1;
                    break;
                case '/':
                    x = x2 / x1;
                    break;
            }
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