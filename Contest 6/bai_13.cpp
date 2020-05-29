#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr, int x) {
    map<int, int> mymap;
    map<int, int>::iterator it;
    for (int i = 0; i < arr.size(); i++) {
        mymap[arr[i]]++;
    }
    if (mymap[x] != 0)
        cout << mymap[x] << endl;
    else
        cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n, x;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v, x);
    }
    return 0;
}