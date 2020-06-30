#include <bits/stdc++.h>
using namespace std;

void DFS_dske(int node, vector<vector<int> > dske, bool isUsed[],
              int parent[]) {
    stack<int> st;
    st.push(node);
    isUsed[node] = true;
    while (!st.empty()) {
        int i = st.top();
        st.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (isUsed[dske[i][j]] == false) {
                isUsed[dske[i][j]] = true;
                parent[dske[i][j]] = i;
                st.push(i);
                st.push(dske[i][j]);
                break;
            }
        }
    }
}

void solve(int u, int v, vector<vector<int> > dske) {
    bool isUsed[1005] = {false};
    int parent[1005] = {0};
    vector<int> result;
    DFS_dske(u, dske, isUsed, parent);
    if (parent[v] == 0) {
        cout << -1 << endl;
        return;
    } else {
        result.push_back(v);
        int back = parent[v];
        while (back != u) {
            result.push_back(back);
            back = parent[back];
        }
        result.push_back(u);
        for (int i = result.size() - 1; i >= 0; i--) {
            cout << result[i] << " ";
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
        int V, E, u, v;
        cin >> V >> E >> u >> v;
        for (int i = 0; i < E; i++) {
            int m, n;
            cin >> m >> n;
            dske[m].push_back(n);
        }
        solve(u, v, dske);
    }
    return 0;
}