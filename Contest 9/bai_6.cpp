#include <bits/stdc++.h>
using namespace std;

bool isUsed[1005];

void init() {
    for (int i = 0; i < 1005; i++) {
        isUsed[i] = false;
    }
}

void DFS_dske(int node, vector<vector<int> > dske) {
    stack<int> st;
    st.push(node);
    cout<<node<<" ";
    isUsed[node] = true;
    while (!st.empty()) {
        int i = st.top();
        st.pop();
        for (int j = 0; j < dske[i].size(); j++) {
            if (!isUsed[dske[i][j]]) {
                cout<<dske[i][j]<<" ";
                isUsed[dske[i][j]] = true;
                st.push(i);
                st.push(dske[i][j]);
                break;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > dske;
        dske.resize(1005);
        int nodes, edges, node;
        cin >> nodes >> edges >> node;
        for (int i = 0; i < edges; i++) {
            int d, c;
            cin >> d >> c;
            dske[d].push_back(c);
            dske[c].push_back(d);
        }
        init();
        DFS_dske(node, dske);
        cout << "\n";
    }
    return 0;
}