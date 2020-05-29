#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXX 1000000007;

ll d[1010][1010];

ll factorial(int x) {
    ll res = 1;
    for (int i = 1; i <= x; i++) {
        res = res * i;
    }
    return res;
}

void resolve(int n, int k) {
    ll res = 1;
    for (int i = n; i >= n - k + 1; i--) {
        res = (res * i) % MAXX;
    }
    cout << res << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        resolve(n, k);
    }
}