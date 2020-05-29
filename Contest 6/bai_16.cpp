#include <bits/stdc++.h>
using namespace std;

int mixe(vector<int> &arr, int low, int high) {
    int key = arr[high];
    int l = low;
    int r = high - 1;
    while (true) {
        while (arr[l] < key && l <= r) l++;
        while (arr[r] > key && l <= r) r--;
        if (l > r) break;
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
    swap(arr[l], arr[high]);
    return l;
}
void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = mixe(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        quickSort(v, 0, n - 1);
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}