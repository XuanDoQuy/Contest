#include <bits/stdc++.h>
using namespace std;

void BFS_dske(int node, vector<vector<int> > dske, bool isUsed[],
              int parent[]) {
    queue<int> q;
    q.push(node);
    isUsed[node] = true;
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (!isUsed[dske[i][j]]) {
                isUsed[dske[i][j]] = true;
                q.push(dske[i][j]);
                parent[dske[i][j]] = i;
            }
        }
    }
}

void solve(int u, int v, vector<vector<int> > dske) {
    vector<int> res;
    bool isUsed[1005] = {false};
    int parent[1005] = {0};
    BFS_dske(u, dske, isUsed, parent);
    if (parent[v] == 0) {
        cout << -1 << endl;
        return;
    } else {
        res.push_back(v);
        int back = parent[v];
        while (back != u) {
            res.push_back(back);
            back = parent[back];
        }
        res.push_back(u);
        for (int i = res.size() - 1; i >= 0; i--) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > dske;
        dske.resize(1005);
        bool isUsed[1005] = {false};
        int V, E, u, v;
        cin >> V >> E >> u >> v;
        for (int i = 0; i < E; i++) {
            int m, n;
            cin >> m >> n;
            dske[m].push_back(n);
            dske[n].push_back(m);
        }
        solve(u, v, dske);
    }
    return 0;
}