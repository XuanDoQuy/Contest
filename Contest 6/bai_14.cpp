#include <bits/stdc++.h>
using namespace std;
#define N 1000005

vector<bool> isSNT(N, true);
vector<int> arrSNT;

void sangSNT() {
    for (int i = 2; i <= N; i++) {
        if (isSNT[i]) {
            for (int j = 2; j * i <= N; j++) {
                isSNT[j * i] = false;
            }
        }
    }
}

void resolve(int n) {
    for (int i = 2; i < n; i++) {
        if (isSNT[i] && isSNT[n - i]) {
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    sangSNT();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        resolve(n);
    }
    return 0;
}