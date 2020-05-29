#include <bits/stdc++.h>
using namespace std;

void resolve(int arr[], int n) {
    int di[1000], dd[1000];
    int res = -1;
    for (int i = 0; i < n; i++) {
        di[i] = arr[i];
        dd[i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                di[i] = max(di[i], di[j] + arr[i]);
            }
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (arr[i] > arr[j]) {
                dd[i] = max(dd[i], dd[j] + arr[i]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        res = max(res, di[i] + dd[i] - arr[i]);
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int x[1000];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        resolve(x, n);
    }
    return 0;
}