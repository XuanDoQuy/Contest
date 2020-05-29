#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int low, int high, int x) {
    int l = low;
    int r = high;
    while (l <= r) {
        int m = (l + r) / 2;
        if (arr[m] == x) return m;
        if (x < arr[m]) r = m - 1;
        if (x > arr[m]) l = m + 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n, x, pivlot = n - 1;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
            if (k < v[i - 1]) pivlot = i - 1;
        }
        int a = binarySearch(v, 0, pivlot, x);
        if (a != -1) cout << a + 1 << endl;
        int b = binarySearch(v, pivlot + 1, n - 1, x);
        if (b != -1) cout << b + 1 << endl;
    }
    return 0;
}