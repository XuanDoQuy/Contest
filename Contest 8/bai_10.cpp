#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 2;
    int res = 0;
    for (int i = 4; i <= n; i++) {
        int k = 0;
        for (int j = sqrt(i); j >= 1; j--) {
            if (j != 1 && i % j == 0) {
                k = i / j;
                break;
            }
        }
        if (k != 0) dp[i] = min(dp[i - 1], dp[k]) + 1;
        else dp[i] = dp[i-1] + 1;
    }
    cout << dp[n] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}