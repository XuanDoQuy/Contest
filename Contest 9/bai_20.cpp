#include <bits/stdc++.h>
using namespace std;

int BFS_dske(int node, vector<vector<int> > dske, bool isUsed[]) {
    int pickedNode = 1;
    queue<int> q;
    q.push(node);
    isUsed[node] = true;
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (!isUsed[dske[i][j]]) {
                isUsed[dske[i][j]] = true;
                pickedNode++;
                q.push(dske[i][j]);
            }
        }
    }
    return pickedNode;
}

void solve(vector<vector<int> > dske, int V) {
    for (int v = 1; v <= V; v++) {
        bool isUsed[1005] = {false};
        isUsed[v] = true;
        if (v != 1) {
            if (BFS_dske(1, dske, isUsed) != V - 1) {
                cout << v << " ";
            }
        }else{
            if (BFS_dske(2, dske, isUsed) != V - 1) {
                cout << v << " ";
            }
        }
    }
    cout << "\n";
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