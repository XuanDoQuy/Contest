#include <bits/stdc++.h>
using namespace std;

int convertToInteger(string s) {
    int x = 0;
    for (int i = 0; i < s.length(); i++) {
        x = 10 * x + (s[i] - 48);
    }
    return x;
}

int sumMin(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '6') a[i] = '5';
    }
    for (int i = 0; i < b.length(); i++) {
        if (b[i] == '6') b[i] = '5';
    }
    return convertToInteger(a) + convertToInteger(b);
}

int sumMax(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '5') a[i] = '6';
    }
    for (int i = 0; i < b.length(); i++) {
        if (b[i] == '5') b[i] = '6';
    }
    return convertToInteger(a) + convertToInteger(b);
}

int main() {
    int t;
    t = 1;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << sumMin(a, b) << " " << sumMax(a, b) << endl;
    }

    return 0;
}
