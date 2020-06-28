#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if (s=="PUSHFRONT"){
            int k;
            cin>>k;
            d.push_front(k);
            continue;
        }
        if (s=="PRINTFRONT"){
            if (d.empty()) cout<<"NONE\n";
            else cout<<d.front()<<endl;
            continue;
        }
        if (s=="PUSHBACK"){
            int k;
            cin>>k;
            d.push_back(k);
            continue;
        }
        if (s=="PRINTBACK"){
            if (d.empty()) cout<<"NONE\n";
            else cout<<d.back()<<endl;
            continue;
        }
        if (s=="POPFRONT"){
            if (!d.empty()) d.pop_front();
            continue;
        }
        if (s=="POPBACK"){
            if (!d.empty()) d.pop_back();
        }
    }
    return 0;
}