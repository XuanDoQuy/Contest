#include <bits/stdc++.h>
using namespace std;

void resolve(string a, string b, int k)
{
    string res;
    int c = 0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int maxSize = max(a.size(), b.size()) + 1;
    a.insert(a.end(), maxSize - a.size(), '0');
    b.insert(b.end(), maxSize - b.size(), '0');
    res.resize(maxSize);
    for (int i = 0; i < maxSize; i++) {
        int temp = (a[i] - '0') + (b[i] - '0') + c;
        if (temp >= k) {
            res[maxSize - 1 - i] = (temp - k) + '0';
            c = 1;
        } else {
            res[maxSize - 1 - i] = temp + '0';
            c = 0;
        }
    }
    if (res[0] != '0')
        cout << res[0];
    for (int i = 1; i < res.size(); i++) {
        cout << res[i];
    }
    cout << endl;
}

int main()
{
    int t;
    t = 1;
    while (t--) {
        string a, b;
        int k;
        cin >> k >> a >> b;
        resolve(a, b, k);
    }
    return 0;
}
