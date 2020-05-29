#include <bits/stdc++.h>
using namespace std;

int resolve(string a, string b) {
    int res = 0;
    map<char, int> mapA, mapB;
    map<char, int>::iterator it;
    for (int i = 0; i < a.length(); i++) {
        mapA[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++) {
        mapB[b[i]]++;
    }
    for (it = mapA.begin(); it != mapA.end(); it++) {
        if (mapB[it->first] != 0) {
            res = res + min(it->second, mapB[it->first]);
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << resolve(a, b) << endl;
    }
    return 0;
}