#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007;

int dp[1005][1005];

void resolve(int n, int k) {
    for (int i = 0; i < k; i++) {
        for (int j = i; j < n; j++) {
            dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= k; i++) {
        for (int j = i; j <= n; j++) {
            if (i == j) {
                dp[i][j] = 1;
                continue;
            }
            if (i == 1 || i == j - 1) {
                dp[i][j] = j;
                continue;
            }
            dp[i][j] = (dp[i - 1][j - 1] + dp[i][j - 1]) % MAX;
        }
    }
    cout << dp[k][n] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        resolve(n, k);
    }
    return 0;
}
