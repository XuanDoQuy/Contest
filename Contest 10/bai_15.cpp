#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int s;
    int e;
    int w;
};

void solve(vector<Edge> dsc, int V, int E, int node) {
    int d[1005];
    int n = V;
    for (int i = 1; i <= n; i++) {
        d[i] = INT_MAX;
    }
    d[node] = 0;
    for (int i = 1; i <= n - 1; i++) {
        for (int c = 0; c < dsc.size(); c++) {
            int u = dsc[c].s;
            int v = dsc[c].e;
            int weight = dsc[c].w;
            if (d[u] != INT_MAX && d[u] + weight < d[v]) {
                d[v] = d[u] + weight;
            }
        }
    }
    for (int e = 0; e < dsc.size(); e++) {
        int u = dsc[e].s;
        int v = dsc[e].e;
        int weight = dsc[e].w;
        if (d[u] != INT_MAX && d[u] + weight < d[v]) {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (d[i]==INT_MAX) cout<<"INFI ";
        else cout << d[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<Edge> dsc;
        int V, E, u;
        cin >> V >> E >> u;
        for (int i = 0; i < E; i++) {
            Edge c;
            cin >> c.s >> c.e >> c.w;
            dsc.push_back(c);
        }
        solve(dsc, V, E, u);
    }
    return 0;
}