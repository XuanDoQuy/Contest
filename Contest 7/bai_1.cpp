#include <bits/stdc++.h>
using namespace std;

vector<int> st;
string s, res;
int x;

int main() {
    while (cin >> s) {
        if (s == "push") {
            cin >> x;
            st.push_back(x);
        }
        if (s == "pop") {
            if (!st.empty()) st.pop_back();
        }
        if (s == "show") {
            if (!st.empty()) {
                for (int i = 0; i < st.size(); i++) {
                    cout << st[i] << " ";
                }
                cout << endl;
            } else {
                cout << "empty" << endl;
            }
        }
    }
    return 0;
}