#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long acsum = 0;
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
            int k;
            cin >> k;
            acsum += k;
        }
        long long sum = (long long)n * (n + 1) / 2;
        cout << sum - acsum << endl;
    }
    return 0;
}