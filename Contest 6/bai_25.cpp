#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> mp;
        map<int, int>::iterator it;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            mp[k]++;
        }
        if (mp.size() < 2) {
            cout << -1 << endl;
        } else {
            it = mp.begin();
            for (int i = 0; i < 2; i++) {
                cout << it->first << " ";
                it++;
            }
            cout << endl;
        }
    }
    return 0;
}