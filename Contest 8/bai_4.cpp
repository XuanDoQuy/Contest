#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string s, ll k) {
    map<char, ll> m;
    map<char, ll>::iterator it;
    vector<ll> v;
    long long res = 0;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    for (it = m.begin(); it != m.end(); it++) {
        v.push_back(it->second);
    }
    priority_queue<ll, vector<ll> > p(v.begin(), v.end());
    while (!p.empty() && k > 0) {
        ll j = p.top();
        p.pop();
        if (j>0) j--;
        p.push(j);
        k--;
    }

    while (!p.empty()) {
        ll i = p.top();
        res += i * i;
        p.pop();
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        solve(s, k);
    }
    return 0;
}