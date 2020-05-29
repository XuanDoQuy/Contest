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
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (!isOp(s[i])) {
            st.push(s[i]-'0');
        } else {
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int tmp;
            switch (s[i]) {
                case '+':
                    tmp = x1 + x2;
                    break;
                case '-':
                    tmp = x1 - x2;
                    break;
                case '*':
                    tmp = x1 * x2;
                    break;
                case '/':
                    tmp = x1 / x2;
                    break;
            }
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