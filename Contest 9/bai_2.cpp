#include <bits/stdc++.h>
using namespace std;

int convertToInt(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = 10 * res + (s[i] - '0');
    }
    return res;
}

void solve(vector<vector<int> > dske) {
    for (int i = 0; i < dske.size(); i++) {
        for (int j = 0; j < dske[i].size(); j++) {
            if (dske[i][j] > i + 1) cout << i + 1 << " " << dske[i][j] << endl;
        }
    }
}

int main() {
    int t;
    t = 1;
    while (t--) {
        vector<vector<int> > dske;
        int v;
        cin >> v;
        cin.ignore();
        for (int i = 0; i < v; i++) {
            string s;
            string clone;
            vector<int> temp;
            getline(cin, s);
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == ' ' && clone.size() > 0) {
                    temp.push_back(convertToInt(clone));
                    clone = "";
                } else {
                    clone.push_back(s[i]);
                }
            }
            temp.push_back(convertToInt(clone));
            dske.push_back(temp);
        }
        solve(dske);
    }
    return 0;
}