#include <bits/stdc++.h>
using namespace std;

void BFS_dske(int node, vector<vector<int> > dske, bool isUsed[]) {
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
            }
        }
    }
}

void solve(vector<vector<int> > dske, int V) {
    int stplt = 0;
    bool isUsed[1005] = {false};
    for (int v = 1; v <= V; v++) {
        if (!isUsed[v]) {
            BFS_dske(v, dske, isUsed);
            stplt++;
        }
    }
    cout << stplt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > dske;
        dske.resize(1005);
        int V, E;
        cin >> V >> E;
        for (int i = 0; i < E; i++) {
            int m, n;
            cin >> m >> n;
            dske[m].push_back(n);
            dske[n].push_back(m);
        }
        solve(dske, V);
    }
    return 0;
}