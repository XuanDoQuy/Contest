#include <bits/stdc++.h>
using namespace std;

int x[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int resolve(int N) {
    int result = 0;
    int k = 9;
    while (N > 0) {
        while (N - x[k] >= 0) {
            N = N - x[k];
            result++;
        }
        k--;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cout << resolve(N) << endl;
    }

    return 0;
}
