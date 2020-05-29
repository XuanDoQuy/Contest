#include <bits/stdc++.h>
using namespace std;

void sortCustom(vector<pair<int, int> > &v) {
    for (int i = 1; i < v.size(); i++) {
        int j = i - 1;
        pair<int, int> p = v[i];
        while (j >= 0 && v[j].first < p.first) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = p;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> mp;
        map<int, int>::iterator it;
        vector<pair<int, int> > p;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            mp[k]++;
        }
        for (it = mp.begin(); it != mp.end(); it++) {
            pair<int, int> pr;
            pr.first = it->second;
            pr.second = it->first;
            p.push_back(pr);
        }
        sortCustom(p);
        for (int i = 0; i < p.size(); i++) {
            for (int j = 0; j < p[i].first; j++) {
                cout << p[i].second << " ";
            }
        }
        cout << endl;
    }
    return 0;
}