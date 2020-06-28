#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    queue<int> q;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s=="PUSH"){
            int k;
            cin>>k;
            q.push(k);
            continue;
        }
        if (s=="PRINTFRONT"){
            if (q.empty()) cout<<"NONE\n";
            else cout<<q.front()<<endl;
            continue;
        }
        if (s=="POP"){
            if (!q.empty()) q.pop();
        }
    }
    return 0;
}