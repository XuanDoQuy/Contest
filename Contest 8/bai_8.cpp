#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n) {
    queue<ll> q;
    int i = 0;
    q.push(1);
    while (true) {
        ll s = q.front();
        q.pop();
        i++;
        if (s % n == 0) {
            cout << s << endl;
            break;
        }
        q.push(10 * s);
        q.push(10 * s + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}