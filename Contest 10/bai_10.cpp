#include <bits/stdc++.h>
using namespace std;

int parent[1005];

struct Edge {
    int s;
    int e;
    int weight;
};

bool comp(Edge a, Edge b) { return (a.weight < b.weight); }

int findParent(int node) {
    if (parent[node] == node)
        return node;
    else
        return findParent(parent[node]);
}

bool invalid(Edge c) {
    int i = findParent(c.s);
    int j = findParent(c.e);
    if (i != j) {
        if (i < j) {
            parent[j] = i;
        } else {
            parent[i] = j;
        }
        return true;
    } else {
        return false;
    }
}

void solve(vector<Edge> dsc, int V, int E) {
    vector<Edge> spanTree;
    int res = 0;
    sort(dsc.begin(), dsc.end(), comp);
    for (int i = 1; i <= V; i++){
        parent[i] = i;
    }
    for (int i = 0; i < dsc.size(); i++) {
        if (spanTree.size() == V - 1) break;
        Edge c = dsc[i];
        if (invalid(c)) {
            spanTree.push_back(c);
            res += c.weight;
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(parent, 0, 1005);
        vector<Edge> dsc;
        int V, E;
        cin >> V >> E;
        for (int i = 0; i < E; i++) {
            Edge c;
            cin >> c.s >> c.e >> c.weight;
            dsc.push_back(c);
        }
        solve(dsc, V, E);
    }
    return 0;
}