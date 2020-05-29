#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr, int n, int x) {
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        if (x >= arr[i])
            temp.push_back(x - arr[i]);
        else
            temp.push_back(arr[i] - x);
    }
    for (int i = 1; i < n; i++) {
        int node = temp[i];
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && temp[j] > node) {
            temp[j+1] = temp[j];
            arr[j+1] = arr[j];
            j--;
        }
        temp[j + 1] = node;
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        vector<int> v;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        resolve(v, n, x);
    }
    return 0;
}