#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr) {
    stack<int> st, st2;
    vector<int> temp(arr.size(), -1);
    vector<int> res(arr.size(), - 1);
    st.push(-1);
    st.push(0);
    for (int i = 1; i < arr.size(); i++) {
        while (arr[i] > arr[st.top()] && st.top() != -1) {
            temp[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    // for (int i = 0; i < temp.size(); i++) {
    //     cout << temp[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == -1) continue;
        for (int j = temp[i]; j < arr.size(); j++) {
            if (arr[j] < arr[temp[i]]) {
                res[i] = arr[j];
                break;
            }
        }
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