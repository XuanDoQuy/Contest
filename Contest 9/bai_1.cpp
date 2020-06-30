#include <bits/stdc++.h>
using namespace std;

void solve(int v, int e, vector<int> dau, vector<int> cuoi) {
    vector<vector<int> > dske;
    dske.resize(1005, vector<int>(1005, 0));
    for (int i = 0; i < e; i++) {
        dske[dau[i]-1].push_back(cuoi[i]);
        dske[cuoi[i]-1].push_back(dau[i]);
    }
    for (int i = 0; i < v; i++) {
        cout << i + 1 << ": ";
        for (int j = 0; j < dske[i].size(); j++) {
            if (dske[i][j] != 0) cout << dske[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> dau, cuoi;
        int v, e;
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            int d, c;
            cin >> d >> c;
            dau.push_back(d);
            cuoi.push_back(c);
        }
        solve(v, e, dau, cuoi);
    }
    return 0;
}