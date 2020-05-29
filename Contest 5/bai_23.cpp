#include <bits/stdc++.h>
using namespace std;

void resolve(int arr[], int n) {
    int res = 0;
    int d[1010];
    for (int i = 0; i < n; i++) {
        d[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] >= arr[j]) {
                d[i] = max(d[i], d[j] + 1);
            }
        }
        res = max(res, d[i]);
    }
    cout << n - res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x[1010];
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        resolve(x, n);
    }
    return 0;
}