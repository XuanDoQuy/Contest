#include <bits/stdc++.h>
using namespace std;

int x[1005][1005];
int d[1005][1005];

void resolve(int n, int m, int x[][1005]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            d[i][j] = 0;
        }
    }
    int initRow = 0;
    int initCol = 0;
    for (int i = 0; i < n; i++) {
        initCol += x[i][0];
        d[i][0] = initCol;
    }
    for (int i = 0; i < m; i++) {
        initRow += x[0][i];
        d[0][i] = initRow;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            d[i][j] =
                min(d[i - 1][j - 1], min(d[i - 1][j], d[i][j - 1])) + x[i][j];
        }
    }
    cout << d[n - 1][m - 1] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> x[i][j];
            }
        }
        resolve(n, m, x);
    }
    return 0;
}