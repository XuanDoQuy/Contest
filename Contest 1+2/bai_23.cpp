#include <bits/stdc++.h>
using namespace std;

int x[100][100];
int n;
bool ok;

void tryFind(int i, int j, string s) {
    if (i == n && j == n) {
        cout << s + " ";
        ok = true;
        return;
    }
    if (i + 1 <= n && x[i + 1][j] == 1) {
        x[i][j] = 0;
        tryFind(i + 1, j, s + "D");
        x[i][j] = 1;
    }
    if (j - 1 >= 1 && x[i][j - 1] == 1) {
        x[i][j] = 0;
        tryFind(i, j - 1, s + "L");
        x[i][j] = 1;
    }
    if (j + 1 <= n && x[i][j + 1] == 1) {
        x[i][j] = 0;
        tryFind(i, j + 1, s + "R");
        x[i][j] = 1;
    }
    if (i - 1 >= 1 && x[i - 1][j] == 1) {
        x[i][j] = 0;
        tryFind(i - 1, j, s + "U");
        x[i][j] = 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ok = false;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> x[i][j];
            }
        }
        if (x[1][1] == 0 || x[n][n] == 0) {
            cout << -1 << endl;
        } else {
            tryFind(1, 1, "");
            if (ok == false) {
                cout << -1 << endl;
            } else {
                cout << endl;
            }
        }
    }
    return 0;
}
