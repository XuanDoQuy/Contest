#include <bits/stdc++.h>
using namespace std;

void solve(int u, vector<vector<int> > dske, int V, int E) {
    vector<pair<int, int> > spanTree;
    bool isUsed[1005] = {false};
    stack<int> st;
    st.push(u);
    isUsed[u] = true;
    while (!st.empty()) {
        int i = st.top();
        st.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (!isUsed[dske[i][j]]) {
                isUsed[dske[i][j]] = true;
                st.push(i);
                st.push(dske[i][j]);
                pair<int, int> p;
                p.first = i;
                p.second = dske[i][j];
                spanTree.push_back(p);
                break;
            }
        }
    }
    if (spanTree.size() != V - 1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < spanTree.size(); i++) {
            cout << spanTree[i].first << " " << spanTree[i].second << endl;
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
        solve(u, dske, V, E);
    }
    return 0;
}