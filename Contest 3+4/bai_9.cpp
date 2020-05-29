#include <bits/stdc++.h>
using namespace std;

struct Work {
    int stt;
    int deadline;
    int profit;
};

bool comp(Work a, Work b) { return a.profit > b.profit; }

void resolve(Work w[], int n) {
    int res = 0;
    int maxProfit = 0;
    bool time[1000] = {false};
    sort(w, w + n, comp);
    for (int i = 0; i < n; i++) {
        for (int j = min(n, w[i].deadline) - 1; j >= 0; j--) {
            if (time[j] == false) {
                time[j] = true;
                res++;
                maxProfit += w[i].profit;
                break;
            }
        }
    }
    cout << res << " " << maxProfit << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Work w[1000];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> w[i].stt;
            cin >> w[i].deadline;
            cin >> w[i].profit;
        }
        resolve(w, n);
    }

    return 0;
}
