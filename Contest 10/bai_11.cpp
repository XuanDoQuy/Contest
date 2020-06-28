#include <bits/stdc++.h>
using namespace std;

int minKey(int key[], bool isUsed[], int V) {
    int minK = INT_MAX;
    int indexMin;
    for (int v = 1; v <= V; v++) {
        if (!isUsed[v] && key[v] < minK) {
            minK = key[v];
            indexMin = v;
        }
    }
    return indexMin;
}

void solve(vector<vector<int> > ke, int V, int E) {
    int res = 0;
    int key[1005];
    int parent[1005];
    bool isUsed[1005];
    for (int i = 1; i <= V; i++) {
        key[i] = INT_MAX;
        isUsed[i] = false;
    }
    key[1] = 0;
    parent[1] = -1;
    for (int c = 0; c < V - 1; c++) {
        int u = minKey(key, isUsed, V);
        isUsed[u] = true;
        for (int v = 1; v <= V; v++) {
            if (ke[u][v] && isUsed[v] == false && ke[u][v] < key[v]) {
                key[v] = ke[u][v];
                parent[v] = u;
            }
        }
    }
    for (int i = 2; i <= V; i++) {
        res += ke[parent[i]][i];
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > ke;
        ke.resize(1005, vector<int>(1005, 0));
        int V, E;
        cin >> V >> E;
        for (int i = 0; i < E; i++) {
            int m, n, p;
            cin >> m >> n >> p;
            ke[m][n] = p;
            ke[n][m] = p;
        }
        solve(ke, V, E);
    }
    return 0;
}