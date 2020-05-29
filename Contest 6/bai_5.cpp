#include <bits/stdc++.h>
using namespace std;

void resolve(vector<int> arr1, vector<int> arr2) {
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    vector<int> arrUnion, arrInters;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            arrUnion.push_back(arr1[i]);
            i++;
            continue;
        }
        if (arr1[i] > arr2[j]) {
            arrUnion.push_back(arr2[j]);
            j++;
            continue;
        }
        arrUnion.push_back(arr1[i]);
        arrInters.push_back(arr1[i]);
        i++;
        j++;
    }
    while (i < arr1.size()) {
        arrUnion.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        arrUnion.push_back(arr2[j]);
        j++;
    }
    for (int i = 0; i < arrUnion.size(); i++) {
        cout << arrUnion[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arrInters.size(); i++) {
        cout << arrInters[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v1, v2;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            v1.push_back(k);
        }
        for (int i = 0; i < m; i++) {
            int k;
            cin >> k;
            v2.push_back(k);
        }
        resolve(v1, v2);
    }
}