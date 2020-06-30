#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    t = 1;
    while(t--){
        vector<vector<int> > dske;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++){
            vector<int> temp;
            for (int j = 0; j < n; j++){
                int k;
                cin>>k;
                if (k!=0) temp.push_back(j+1);
            }
            dske.push_back(temp);
        }
        for (int i = 0; i < dske.size(); i++){
            for (int j = 0; j < dske[i].size(); j++){
                cout<<dske[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}