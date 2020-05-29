#include <bits/stdc++.h>
using namespace std;

int l[1005][1005];

void resolve(string s) {
    int n = s.length();
    int maxLength = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            l[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        l[i][i] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) {
            maxLength = 2;
            l[i][i + 1] = 1;
        }
    }

    for (int k = 3; k <= n; k++) {
        for (int i = 0; i < n - k + 1; i++) {
            int j = i + k - 1;
            if (s[i] == s[j] && l[i + 1][j - 1] == 1) {
                l[i][j] = 1;
                if (k > maxLength) {
                    maxLength = k;
                }
            }
        }
    }
    cout << maxLength << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        resolve(s);
    }
    return 0;
}