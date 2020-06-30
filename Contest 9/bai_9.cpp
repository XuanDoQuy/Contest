#include<bits/stdc++.h>
using namespace std;

bool isUsed[1005];

void init(){
    for (int i=0;i<1005;i++){
        isUsed[i] = false;
    }
}

void BFS_dske(int node,vector<vector<int> > dske){
    queue<int> q;
    q.push(node);
    isUsed[node] = true;
    while(!q.empty()){
        int i = q.front();
        q.pop();
        cout<<i<<" ";
        for (int j=0;j<dske[i].size();j++){
            if (!isUsed[dske[i][j]]){
                isUsed[dske[i][j]] = true;
                q.push(dske[i][j]);
            }
        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<int> > dske;
        dske.resize(1005);
        int nodes,edges,node;
        cin>>nodes>>edges>>node;
        for (int i=0;i<edges;i++){
            int d,c;
            cin>>d>>c;
            dske[d].push_back(c);
        }
        init();
        BFS_dske(node,dske);
    }
    return 0;
}