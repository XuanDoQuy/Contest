#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int resolve(string a, string b) {
    // lay i ki tu dau tien cua xau a va j ki tu dau tien cua xau b
    for (int i = 0; i <= a.length(); i++) {
        for (int j = 0; j <= b.length(); j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
                continue;
            }
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    return dp[a.length()][b.length()];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << resolve(a, b) << endl;
    }
    return 0;
}
