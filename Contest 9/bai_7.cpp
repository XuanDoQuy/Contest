#include<bits/stdc++.h>
using namespace std;

bool isUsed[1005];

void init(){
    for (int i=0;i<1005;i++){
        isUsed[i] = false;
    }
}

void DFS_dske(int node,vector<vector<int> > dske){
    cout<<node<<" ";
    isUsed[node] = true;
    for (int i=0;i<dske[node].size();i++){
        if (!isUsed[dske[node][i]]){
            isUsed[dske[node][i]] = true;
            DFS_dske(dske[node][i],dske);
        }
    }
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
        DFS_dske(node,dske);
        cout<<"\n";
    }
    return 0;
}