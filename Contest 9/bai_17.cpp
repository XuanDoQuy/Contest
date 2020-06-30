#include <bits/stdc++.h>
using namespace std;

int DFS_dske(int node, vector<vector<int> > dske, bool isUsed[]) {
    int pickedNode = 1;
    stack<int> st;
    st.push(node);
    isUsed[node] = true;
    while (!st.empty()) {
        int i = st.top();
        st.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (isUsed[dske[i][j]] == false) {
                isUsed[dske[i][j]] = true;
                pickedNode++;
                st.push(i);
                st.push(dske[i][j]);
                break;
            }
        }
    }
    return pickedNode;
}

void solve(vector<vector<int> > dske, int V) {
    for (int v = 1; v <= V; v++) {
        bool isUsed[1005] = {false};
        if (DFS_dske(v, dske, isUsed) != V) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
        }
        solve(dske, V);
    }
    return 0;
}