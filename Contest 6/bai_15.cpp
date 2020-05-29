#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
    vector<int> v1;
    vector<int> v2;
    int i = 0, j = 0, k = l;
    int v1size, v2size;
    v1size = m - l + 1;
    v2size = r - m;
    for (int i = 0; i < v1size; i++) {
        v1.push_back(arr[l + i]);
    }
    for (int i = 0; i < v2size; i++) {
        v2.push_back(arr[m + 1 + i]);
    }
    while (i < v1size && j < v2size) {
        if (v1[i] <= v2[j]) {
            arr[k] = v1[i];
            i++;
        } else {
            arr[k] = v2[j];
            j++;
        }
        k++;
    }
    while (i < v1size) {
        arr[k] = v1[i];
        i++;
        k++;
    }
    while (j < v2size) {
        arr[k] = v2[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int l, int r) {
    int mid = (l + r) / 2;
    if (l < r) {
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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
        mergeSort(v, 0, v.size() - 1);
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}