#include <bits/stdc++.h>
using namespace std;

int x[50];
vector<pair<int, int> > v;
vector<int> pos;
string s;

bool check(int j) {
    for (int i = 0; i < pos.size(); i++) {
        if (j == pos[i]) return false;
    }
    return true;
}

bool invalid(){
    for (int i=0;i<v.size();i++){
        if (x[i]==1) return true;
    }
    return false;
}

void display() {
    pos.clear();
    for (int i = 0; i < v.size(); i++) {
        if (x[i] == 1) {
            pos.push_back(v[i].first);
            pos.push_back(v[i].second);
        }
    }
    for (int j = 0; j < s.length(); j++) {
        if (check(j)) cout << s[j];
    }
    cout << endl;
}

void back(int i, int n) {
    for (int j = 0; j <= 1; j++) {
        x[i] = j;
        if (i == n - 1) {
            if (invalid()){
                display();
            }         
        } else {
            back(i + 1, n);
        }
    }
}

void resolve() {
    stack<int> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') st.push(i);
        if (s[i] == ')') {
            pair<int, int> p;
            p.first = st.top();
            p.second = i;
            v.push_back(p);
            st.pop();
        }
    }
    reverse(v.begin(),v.end());
    back(0, v.size());
}

int main() {
    getline(cin, s);
    resolve();
    return 0;
}