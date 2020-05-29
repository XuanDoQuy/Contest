#include <bits/stdc++.h>
using namespace std;

struct Work {
    int s;
    int e;
};

bool comp(Work a, Work b) { return a.e < b.e; }

int resolve(Work w[], int n) {
    int res = 1;
    int ending = 0;
    sort(w, w + n, comp);
    for (int i = 1; i < n; i++) {
        if (w[i].s < w[ending].e) continue;
        res++;
        ending = i;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Work w[1000];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> w[i].s;
        }
        for (int i = 0; i < n; i++) {
            cin >> w[i].e;
        }
        cout << resolve(w, n) << endl;
    }
}
