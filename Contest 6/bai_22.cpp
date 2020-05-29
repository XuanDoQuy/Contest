#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        if (binary_search(v.begin(), v.end(), x))
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}