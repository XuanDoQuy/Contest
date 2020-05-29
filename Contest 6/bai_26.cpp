#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    while (t--) {
        int arr[110];
        int n;
        int step = 1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) {
                    swap(arr[j], arr[i]);
                }
                cout << "Buoc " << step << ": ";
                for (int t = 0; t < n; t++) {
                    cout << arr[t] << " ";
                }
                step++;
                cout << endl;
            }
        }
    }
    return 0;
}