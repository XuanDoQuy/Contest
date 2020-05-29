#include<bits/stdc++.h>
using namespace std;
#define eMAX 1000000007;

long long minCost(vector<int> x,int n){
	priority_queue<int ,vector<int> , greater<int> > pq(x.begin(),x.end());
	long long res = 0;
	while(pq.size() > 1){
		int f = pq.top();
		pq.pop();
		int s = pq.top();
		pq.pop();
		long long k = (f + s) % eMAX;
		res = (res + k) % eMAX;
		pq.push(f+s);
	}
	return res;
}

int main() {
	int t;
	t=1;
	while(t--){
		vector<int> v;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int k; cin>>k;
			v.push_back(k);
		}
		cout<<minCost(v,n)<<endl;
	}

	return 0;
}

