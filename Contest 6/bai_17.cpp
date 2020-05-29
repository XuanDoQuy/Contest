#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v1, v2;
        int n, m;
        int maxv1 = INT_MIN;
        int minv2 = INT_MAX;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if (k > maxv1) maxv1 = k;
        }
        for (int i = 0; i < m; i++) {
            int k;
            cin >> k;
            if (k < minv2) minv2 = k;
        }
        cout << (long long) maxv1 * minv2 << endl;
    }
    return 0;
}