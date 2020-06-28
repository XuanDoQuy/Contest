#include <bits/stdc++.h>
using namespace std;

int minKey(int key[], int V, bool isUsed[]) {
    int minKey = INT_MAX;
    int index;
    for (int i = 1; i <= V; i++) {
        if (!isUsed[i] && key[i] < minKey) {
            minKey = key[i];
            index = i;
        }
    }
    return index;
}

void solve(vector<vector<int> > ke, int V, int E, int node) {
    int key[1005];
    bool isUsed[1005] = {false};
    for (int v = 1; v <= V; v++) {
        key[v] = INT_MAX;
        isUsed[v] = false;
    }
    key[node] = 0;
    for (int i = 0; i < V ; i++) {
        int u = minKey(key, V, isUsed);
        //cout << u << endl;
        isUsed[u] = true;
        for (int v = 1; v <= V; v++) {
            if (isUsed[v] == false && ke[u][v] != 0 && key[u] != INT_MAX &&
                key[u] + ke[u][v] < key[v]) {
                key[v] = key[u] + ke[u][v];
            }
        }
    }
    for (int i = 1; i <= V; i++) {
        cout << key[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > ke;
        ke.resize(1005, vector<int>(1005, 0));
        int V, E, u;
        cin >> V >> E >> u;
        for (int i = 0; i < E; i++) {
            int s, e, w;
            cin >> s >> e >> w;
            ke[s][e] = w;
            ke[e][s] = w;
        }
        // for (int i = 1; i <= V; i++) {
        //     for (int j = 1; j <= V; j++) {
        //         cout << ke[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        solve(ke, V, E, u);
    }
    return 0;
}