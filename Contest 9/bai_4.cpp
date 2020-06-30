#include <bits/stdc++.h>
using namespace std;

int convertToInt(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = res + (s[i] - '0');
    }
    return res;
}

int main() {
    int t;
    t = 1;
    while (t--) {
        vector<vector<int> > dske;
        vector<vector<int> > ke;
        ke.resize(1005, vector<int>(1005, 0));
        dske.resize(1005);
        int n;
        cin >> n;
        cin.ignore();
        for (int i = 1; i <= n; i++) {
            vector<int> temp; 
            string s;
            getline(cin,s);
            istringstream my_stream(s);
            while(my_stream){
                int x;
                my_stream >> x;
                temp.push_back(x);
            }
            dske[i] = temp;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < dske[i].size(); j++) {
                ke[i][dske[i][j]] = 1;
                // ke[dske[i][j]][i+1] = 1;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << ke[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}