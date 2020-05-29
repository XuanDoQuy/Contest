#include <bits/stdc++.h>
using namespace std;
/*
b1
cho lan luot tung ki tu cua s vao res cho den khi gap ')'
lay cac phan tu va dau cua no cho den khi gap '(' ,push vao st
dong thoi xoa chung o res
b2
lay dau truoc '(' push vao sign
b3
neu dau do +  thi push st vao res,
neu dau do - thi dao dau

*/

bool getSign(vector<char> s, int i) {
    if (i == 0) return true;
    if (s[i - 1] == '-') return false;
    return true;
}

void resolve(string s) {
    stack<bool> sign;
    stack<char> st;
    vector<char> res;
    st.push('W');
    sign.push(true);
    for (int i = 0; i < s.length(); i++) {
        // b1
        if (s[i] == ')') {
            int j = res.size() - 1;
            while (res[j] != '(') {
                if (res[j] != '+' && res[j] != '-') {
                    st.push(res[j]);
                    bool itemSign = getSign(res, j);
                    if (itemSign == true) {
                        st.push('+');
                    } else {
                        st.push('-');
                    }
                }
                res.pop_back();
                j--;
            }
            // b2;
            sign.push(getSign(res, res.size() - 1));  // lay dau truoc mo ngoac
            res.pop_back();                           // bo dau mo ngoac
            if (!res.empty() && (res.back() == '+' || res.back() == '-'))
                res.pop_back();  // bo dau truoc + - truoc mo ngoac
            // b3
            if (sign.top() == true) {
                while (st.top() != 'W') {
                    res.push_back(st.top());
                    st.pop();
                }
            } else {
                while (st.top() != 'W') {
                    if (st.top() == '+') {
                        res.push_back('-');
                        st.pop();
                        continue;
                    }
                    if (st.top() == '-') {
                        res.push_back('+');
                        st.pop();
                        continue;
                    }
                    res.push_back(st.top());
                    st.pop();
                }
            }
            sign.pop();

        } else {
            res.push_back(s[i]);
        }
    }
    for (int i = 0; i < res.size(); i++) {
        if (i == 0 && res[i] == '+') continue;
        cout << res[i];
    }
    cout << endl;
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