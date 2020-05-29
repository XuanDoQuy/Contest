#include <bits/stdc++.h>
using namespace std;

int resolve(int x[], int n) {
    int dp[n] = {0};
    int res = 1;
    dp[0] = 1;
    for (int i = 1; i < n; i++) {  // xet den phan tu thu i
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (x[j] < x[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res = max(res, dp[i]);
    }
    return res;
}

int main() {
    int x[1005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    cout << resolve(x, n);
    return 0;
}
