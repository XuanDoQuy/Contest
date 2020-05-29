#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void resolve(vector<int> arr) {
//     ll maxArea = 0;
//     for (int i = 0; i < arr.size(); i++) {
//         int l = i;
//         int r = i;
//         while (arr[l] >= arr[i] && l >= 0) l--;
//         while (arr[r] >= arr[i] && r <= arr.size() - 1) r++;
//         ll area = (r - l - 1) * arr[i];
//         if (area > maxArea) maxArea = area;
//     }
//     cout << maxArea << endl;
// }

void resolve(vector<int> arr) {
    ll res = 0;
    stack<int> st;
    int i = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (st.empty() || arr[i] >= arr[st.top()]) {
            st.push(i);
        } else {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                int high = arr[st.top()];
                int width;
                st.pop();
                if (st.empty()) {
                    width = i;
                } else {
                    width = i - st.top() - 1;
                }
                ll area = high * width;
                // cout << high << " * " << width << " ";
                // cout << area << endl;
                res = max(res, area);
            }
            st.push(i);
        }
    }
    while (!st.empty()) {
        int high = arr[st.top()];
        int width;
        st.pop();
        if (st.empty()) {
            width = arr.size();
        } else {
            width = arr.size() - st.top() - 1;
        }
        ll area = high * width;
        // cout << high << " * " << width << " ";
        // cout << area << endl;
        res = max(res, area);
    }
    cout<<res<<endl;
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