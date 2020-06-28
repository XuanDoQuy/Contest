#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int s;
    int e;
};

bool isSafe(vector<Edge> dsc, int color[]) {
    for (int i = 0; i < dsc.size(); i++) {
        if (color[dsc[i].s] == color[dsc[i].e]) {
            return false;
        }
    }
    return true;
}

void backTrack(int i, int m, int V, int color[], bool &ok,vector<Edge> dsc) {
    for (int j = 1; j <= m; j++) {
        color[i] = j;
        if (i == V) {
            if (isSafe(dsc,color)) {
                ok = true;
            }
        } else {
            backTrack(i + 1, m, V, color, ok,dsc);
        }
    }
}

void solve(vector<Edge> dsc, int V, int m) {
    int color[V + 5]={0};
    bool ok = false;
    backTrack(1, m, V, color, ok,dsc);
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<Edge> dsc;
        int V, E, m;
        cin >> V >> E >> m;
        for (int i = 0; i < E; i++) {
            Edge e;
            cin >> e.s >> e.e;
            dsc.push_back(e);
        }
        solve(dsc, V, m);
    }
    return 0;
}