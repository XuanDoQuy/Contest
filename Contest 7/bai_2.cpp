#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    string s;
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s == "PUSH") {
            cin >> k;
            st.push(k);
        }
        if (s == "POP") {
            if (!st.empty()) st.pop();
        }
        if (s == "PRINT") {
            if (!st.empty())
                cout << st.top() << endl;
            else
                cout << "NONE" << endl;
        }
    }
    return 0;
}