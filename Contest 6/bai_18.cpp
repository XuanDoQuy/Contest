#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v1, v2;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v1.push_back(k);
        }
        for (int i = 0; i < m; i++) {
            int k;
            cin >> k;
            v2.push_back(k);
        }
        v1.insert(v1.end(), v2.begin(), v2.end());
        sort(v1.begin(), v1.end());
        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}