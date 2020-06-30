#include <bits/stdc++.h>
using namespace std;

int BFS_dske(int u, int v, vector<vector<int> > dske, bool isUsed[]) {
    int pickedNode = 1;
    queue<int> q;
    q.push(1);
    isUsed[1] = true;
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (!isUsed[dske[i][j]]&&(i!=u||dske[i][j]!=v)&&(i!=v||dske[i][j]!=u)) {
                isUsed[dske[i][j]] = true;
                pickedNode++;
                q.push(dske[i][j]);
            }
        }
    }
    return pickedNode;
}

void solve(vector<vector<int> > dske, int V) {
    for (int i = 1; i <= V; i++) {
        for (int j = 0; j < dske[i].size(); j++) {
            if (i < dske[i][j]) {
                bool isUsed[1005] = {false};
                if (BFS_dske(i, dske[i][j], dske, isUsed) != V) {
                    cout << i << " " << dske[i][j] << " ";
                }
            }
        }
    }
    cout << endl;
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