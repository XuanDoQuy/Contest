#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
    int res = 0;
    if (n >= m) {
        cout << n - m << endl;
        return;
    } else {
        while (m > n) {
            if (m % 2 == 0) {
                m = m / 2;
            } else {
                m = m + 1;
                ;
            }
            res++;
        }
        cout << res + n - m << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}