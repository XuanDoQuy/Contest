#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v0, v1, v2;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if (k == 0) v0.push_back(k);
            if (k == 1) v1.push_back(k);
            if (k == 2) v2.push_back(k);
        }
        for (int i = 0; i < v0.size(); i++) cout << v0[i] << " ";
        for (int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
        for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
        cout << endl;
    }
}