#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int low, int high, int x) {
    int l = low;
    int r = high;
    while (l <= r) {
        int m = (l + r) / 2;
        if (arr[m] == x) return m + 1;
        if (x < arr[m]) r = m - 1;
        if (x > arr[m]) l = m + 1;
    }
    return l;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n, k;
        long long res = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int z;
            cin >> z;
            v.push_back(z);
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++) {
            int j = binarySearch(v, 0, i - 1, v[i] - k);
            res += i - j;
        }
        cout << res << endl;
    }
    return 0;
}