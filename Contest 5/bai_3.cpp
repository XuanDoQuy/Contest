#include <bits/stdc++.h>
using namespace std;

int x[1000];
int n, s;

void resolve(int x[], int n, int s) {
    int dp[40005] = {0};
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int t = s; t >= x[i]; t--) {
            if (dp[t - x[i]] == 1) dp[t] = 1;    
        }
    }
    if (dp[s] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        resolve(x, n, s);
    }
}