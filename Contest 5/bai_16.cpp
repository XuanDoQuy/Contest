#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr, int n) {
    vector<int> d;
    d.resize(n);
    int res = arr[0];
    for (int i = 0; i < n; i++) {
        d[i] = arr[i];
        for (int j = 0; j < n; j++) {
            if (arr[i] > arr[j]) {
                d[i] = max(d[i], d[j] + arr[i]);
            }
        }
        res = max(res, d[i]);
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        resolve(arr, n);
    }
}