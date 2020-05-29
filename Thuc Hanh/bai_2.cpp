#include <bits/stdc++.h>
using namespace std;
#define ll long long

void resolve(vector<int> arr) {
    ll incl;
    ll excl;
    incl = arr[0];
    excl = 0;
    for (int i = 1; i < arr.size(); i++) {
        ll excl_new = max(incl, excl);
        incl = excl + arr[i];
        excl = excl_new;
    }
    cout << max(incl, excl) << endl;
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