#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        queue<int> qe;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            switch (k) {
                case 1:
                    cout << qe.size() << endl;
                    break;
                case 2:
                    if (qe.empty())
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                    break;
                case 3:
                    int m;
                    cin >> m;
                    qe.push(m);
                    break;
                case 4:
                    if (!qe.empty()) qe.pop();
                    break;
                case 5:
                    if (!qe.empty())
                        cout << qe.front() << endl;
                    else
                        cout << -1 << endl;
                    break;
                case 6:
                    if (!qe.empty())
                        cout << qe.back() << endl;
                    else
                        cout << -1 << endl;
                    break;
            }
        }
    }
    return 0;
}