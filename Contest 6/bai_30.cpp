#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    t = 1;
    while (t--) {
        vector<long long> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            long long k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}