#include <bits/stdc++.h>
using namespace std;

void resolve(vector<pair<int, int> > arr) {
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < arr.size()) {
        if (i != arr[i].second) {
            cout << i + 1 << " ";
            break;
        }
        i++;
    }
    int j = arr.size() - 1;
    while (j >= 0) {
        if (j != arr[j].second) {
            cout << j + 1;
            break;
        }
        j--;
    }
    cout << endl;
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
        resolve(v);
    }
}