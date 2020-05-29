#include <bits/stdc++.h>
using namespace std;

int x[100000],y[100000];

int binarySearch(int x[], int n, int m) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (x[mid] == m) return mid + 1;
        if (x[mid] > m) {
            r = mid - 1;
        }
        if (x[mid] < m) {
            l = mid + 1;
        }
    }
    return l;
}

int conutResult(int x, int y[], int m, int numApr[]) {
    int res = 0;
    if (x == 0) return 0;
    if (x == 1) return numApr[0];
    int pos = binarySearch(y, m, x);
    res += m - pos;
    res = res + numApr[0] + numApr[1];
    if (x == 2) res = res - numApr[3] - numApr[4];
    if (x == 3) res = res + numApr[2];
    return res;
}

void resolve(int x[], int y[], int n, int m) {
    int numAprear[1005] = {0};
    int res = 0;
    sort(y, y + m);
    for (int i = 0; i < m; i++) {
        numAprear[y[i]]++;
    }
    // for (int i=0;i<6;i++){
    //     cout<<numAprear[i]<<endl;
    // }
    for (int i = 0; i < n; i++) {
        res += conutResult(x[i], y, m, numAprear);
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < m; i++) cin >> y[i];
        resolve(x, y, n, m);
    }
}