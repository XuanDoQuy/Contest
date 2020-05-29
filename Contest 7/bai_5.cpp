#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        stack<int> st;
        st.push(-1);
        int res = 0;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
                continue;
            }
            if (s[i]==')'){
                st.pop();
                if (!st.empty()){
                    res = max (res,i-st.top());
                }else{
                    st.push(i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}