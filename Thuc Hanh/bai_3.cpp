#include <bits/stdc++.h>
using namespace std;

void resolve(int n) {
    int step = 0;
    while (n > 1) {
        if (n % 3 == 0) {
            n = n / 3;
            step++;
            continue;
        }
        if (n % 2 == 0) {
            n = n / 2;
            step++;
            continue;
        }
        n--;
        step++;
    }
    cout << step << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        resolve(n);
    }
    return 0;
}