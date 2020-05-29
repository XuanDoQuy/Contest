#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr, int n) {
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = n - 1;
    while (l < r) {
        cout << arr[r] << " " << arr[l] << " ";
        l++;
        r--;
    }
    if (l == r) cout << arr[l] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v, n);
    }
    return 0;
}