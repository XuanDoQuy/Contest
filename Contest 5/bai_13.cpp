#include <bits/stdc++.h>
using namespace std;

bool comp(long long a, long long b) { return a > b; }

struct cmp {
    bool operator()(long long a, long b) { return a > b; }
};

void resolve(int n) {
    priority_queue<long long, vector<long long>, cmp> progress;
    long long res = 0;
    progress.push(1);
    for (int k = 1; k <= n; k++) {
        while (res == progress.top()) {
            progress.pop();
        }
        res = progress.top();
        progress.pop();
        progress.push(2 * res);
        progress.push(3 * res);
        progress.push(5 * res);
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        resolve(n);
    }
}
