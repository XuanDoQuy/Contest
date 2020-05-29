#include <bits/stdc++.h>
using namespace std;

struct Data {
    int a;
    int b;
};

bool comp(Data dat1, Data dat2) { return dat1.b < dat2.b; }

void resolve(Data d[], int n) {
    sort(d, d + n, comp);
    int res = 1;
    int ending = 0;
    for (int i = 1; i < n; i++) {
        if (d[i].a > d[ending].b) {
            res++;
            ending = i;
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Data dat[1000];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> dat[i].a >> dat[i].b;
        }
        resolve(dat, n);
    }
    return 0;
}