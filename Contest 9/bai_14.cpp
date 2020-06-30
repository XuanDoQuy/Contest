#include<bits/stdc++.h>
using namespace std;

void BFS(int u, int v,vector<vector<int> > dske){
    bool isUsed[1005]={false};
    queue<int> q;
    q.push(u);
    isUsed[u] = true;
    while(!q.empty()){
        int i=q.front();
        q.pop();
        if (i==v){
            cout<<"YES\n";
            return;
        }
        for(int j=0;j<dske[i].size();j++){
            if (!isUsed[dske[i][j]]){
                isUsed[dske[i][j]] = true;
                q.push(dske[i][j]);
            }
        }
    }
    cout<<"NO\n";
}


int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<int> > dske;
        vector<pair<int,int> > uv;
        dske.resize(1005);
        bool isUsed[1005] = {false};
        int V, E;
        cin >> V >> E;
        for (int i = 0; i < E; i++) {
            int m, n;
            cin >> m >> n;
            dske[m].push_back(n);
            dske[n].push_back(m);
        }
        int n;
        cin>>n;
        for (int i = 0; i < n; i++){
            int u,v;
            cin>>u>>v;
            BFS(u,v,dske);
        }
    }
    return 0;
}