#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        map<int, int> mymap;
        map<int, int>::iterator it;
        int n;
        int max = INT_MIN;
        int min = INT_MAX;
        int coutor = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            mymap[k]++;
            if (k > max) max = k;
            if (k < min) min = k;
        }
        for (it = mymap.begin(); it != mymap.end(); it++) {
            if (it->second > 0) coutor++;
        }
        cout << max - min + 1 - coutor << endl;
    }
    return 0;
}
