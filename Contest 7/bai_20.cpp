#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr) {
    vector<int> res(arr.size(), -1);
    stack<int> st;
    st.push(-1);
    st.push(0);
    for (int i = 1; i < arr.size(); i++) {
        while (arr[i] > arr[st.top()] && st.top() != -1) {
            res[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v);
    }
    return 0;
}