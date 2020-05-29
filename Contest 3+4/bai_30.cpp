#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007
#define ll long long

void resolve(int n) {
    ll a = 0;
    ll b = 1;
    ll c;
    for (int i = 2; i <= n; i++) {
        c = (a + b) % MAX;
        a = b;
        b = c;
    }
    cout << b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        resolve(n);
    }
    return 0;
}
