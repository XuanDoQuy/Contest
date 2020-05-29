#include <bits/stdc++.h>
using namespace std;

int gttd(int x) { return (x > 0) ? x : 0 - x; }

void resolve(vector<int> arr) {
    int min = INT_MAX;
    int res;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int t = arr[i] + arr[j];
            if (gttd(t) < min) {
                min = gttd(t);
                res = t;
            }
        }
    }
    cout << res << endl;
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
}