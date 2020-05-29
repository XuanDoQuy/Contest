#include <bits/stdc++.h>
using namespace std;

bool getSign(vector<char> s, int i) {
    if (i == 0) return true;
    if (s[i - 1] == '-') return false;
    return true;
}

void resolve(string s, string s2) {
    vector<char> vc;
    stack<char> stc;
    stack<bool> sign;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ')') {
            vc.push_back(s[i]);
        } else {
            // b1;
            while (vc.back() != '(') {
                char c = vc.back();
                if (c != '+' && c != '-') {
                    stc.push(c);
                    if (getSign(vc, vc.size() - 1) == true)
                        stc.push('+');
                    else
                        stc.push('-');
                }
                vc.pop_back();
            }
            // b2;
            sign.push(getSign(vc, vc.size() - 1));
            vc.pop_back();
            if (!vc.empty() && (vc.back() == '+' || vc.back() == '-'))
                vc.pop_back();
            // b3;
            if (sign.top() == true) {
                while (!stc.empty()) {
                    vc.push_back(stc.top());
                    stc.pop();
                }
            } else {
                while (!stc.empty()) {
                    if (stc.top() == '+')
                        vc.push_back('-');
                    else if (stc.top() == '-')
                        vc.push_back('+');
                    else
                        vc.push_back(stc.top());
                    stc.pop();
                }
            }
        }
    }
    if (vc[0] == '+') vc.erase(vc.begin());
    for (int i = 0; i < vc.size(); i++) {
        if (vc[i] != s2[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, s2;
        cin >> s >> s2;
        resolve(s, s2);
    }
    return 0;
}