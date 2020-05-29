#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v, k);
    }
    return 0;
}