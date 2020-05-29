#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr) {
    map<int, int> mymap;
    map<int, int>::iterator it;
    for (int i = 0; i < arr.size(); i++) {
        int x = arr[i];
        while (x > 0) {
            int k = x % 10;
            mymap[k]++;
            x = x / 10;
        }
    }
    for (it = mymap.begin(); it != mymap.end(); it++) {
        cout << it->first << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v);
    }
    return 0;
}