#include <bits/stdc++.h>
using namespace std;

void resolve(vector<pair<int, int> > arr, int n) {
    sort(arr.begin(), arr.end());
    bool isVisited[n] = {false};
    int res = 0;
    for (int i = 0; i < n; i++) {  // duyet cac node
        if (isVisited[i] || arr[i].second == i) continue;
        int cyc = 0;
        int j = i;
        while (!isVisited[j]) {
            isVisited[j] = true;
            j = arr[j].second;
            cyc++;
        }
        if (cyc > 0) {
            res = res + cyc - 1;
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<pair<int, int> > v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            pair<int, int> p;
            cin >> p.first;
            p.second = i;
            v.push_back(p);
        }
        resolve(v, n);
    }
}