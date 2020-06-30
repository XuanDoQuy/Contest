#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> s,e;
        vector<vector<int> > dske;
        dske.resize(1005);
        int nodes, edges;
        cin>>nodes>>edges;
        for (int i = 0; i < edges; i++){
            int d,c;
            cin>>d>>c;
            dske[d-1].push_back(c);
        }
        for (int i=0;i<nodes;i++){
            cout<<i+1<<": ";
            for (int j=0;j<dske[i].size();j++){
                cout<<dske[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}