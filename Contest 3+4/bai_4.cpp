#include <bits/stdc++.h>
using namespace std;

long long convertToInteger(vector<int> x) {
    long long num = 0;
    for (int i = 0; i < x.size(); i++) {
        num = 10 * num + x[i];
    }
    return num;
}

long long resolve(vector<int> x) {
    vector<int> a, b;
    sort(x.begin(), x.end());
    for (int i = 0; i < x.size(); i++) {
        if (i % 2 == 0) {
            a.push_back(x[i]);
        } else {
            b.push_back(x[i]);
        }
    }
    return convertToInteger(a) + convertToInteger(b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<int> x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if (k != 0) x.push_back(k);
        }
        cout << resolve(x) << endl;
    }

    return 0;
}
