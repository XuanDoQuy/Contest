#include <bits/stdc++.h>
using namespace std;

string s;

// void resolve(int n,int k){
//	vector<int> x;
//	x.push_back(1);
//	for(int i=2;i<=n;i++){
//		vector<int> temp;
//		temp.insert(temp.begin(),x.begin(),x.end());
//		x.insert(x.end(),i);
//		x.insert(x.end(),temp.begin(),temp.end());
//	}
//	for(int i=0;i<x.size();i++){
//		cout<<x[i]<<" ";
//	}
//	cout<<x[k-1]<<endl;
//}

void resolve(int n, int k) {
    s = "1";
    for (int i = 2; i <= n; i++) {
        string t;
        t.push_back(i + '0');
        s = s + t + s;
    }
    cout << s[k - 1] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        resolve(n, k);
    }
    return 0;
}
