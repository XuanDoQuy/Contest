#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll d[1000000];

void resolve(vector<int> arr, int n) {
    ll incl = arr[0];
    ll excl = 0;
    /*
    excl[i] = max (incl[i-1],excl[i-1])
    incl[i] = excl[i-1] + arr[i]
    */
    for (int i = 1; i < n; i++) {
        ll exclNew = max(incl, excl);
        incl = excl + arr[i];
        excl = exclNew;
    }
    if (incl > excl)
        cout << incl << endl;
    else
        cout << excl << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v, n);
    }
    return 0;
}