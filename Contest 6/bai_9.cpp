#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr, int n, int k) {
    int res = 0;
    map<int, int> mymap;
    map<int, int>::iterator it;
    for (int i = 0; i < arr.size(); i++) {
        mymap[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++) {
        res = res + mymap[k - arr[i]];
        if (arr[i] == k - arr[i]) res--;
    }
    cout << res / 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v, n, k);
    }
}