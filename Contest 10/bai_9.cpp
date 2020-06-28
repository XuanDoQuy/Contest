#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int> > dske, int V, int E, int u) {
    vector<pair<int, int> > res;
    bool isUsed[1005] = {false};
    queue<int> q;
    q.push(u);
    isUsed[u] = true;
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (!isUsed[dske[i][j]]) {
                isUsed[dske[i][j]] = true;
                q.push(dske[i][j]);
                pair<int, int> p;
                p.first = i;
                p.second = dske[i][j];
                res.push_back(p);
            }
        }
    }
    if (res.size() != V - 1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i].first << " " << res[i].second << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > dske;
        dske.resize(1005);
        int V, E, u;
        cin >> V >> E >> u;
        for (int i = 0; i < E; i++) {
            int m, n;
            cin >> m >> n;
            dske[m].push_back(n);
            dske[n].push_back(m);
        }
        solve(dske, V, E, u);
    }
    return 0;
}