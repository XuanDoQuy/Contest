#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll resolve(vector<ll> a, vector<ll> b){
	ll result = 0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<ll>());
	for(int i=0;i<a.size();i++){
		result = result + a[i]*b[i];
	}
	return result;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		vector<ll> a,b;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			ll k;cin>>k;
			a.push_back(k);
		}
		for(int i=0;i<n;i++){
			ll k;cin>>k;
			b.push_back(k);
		}
		cout<<resolve(a,b)<<endl;
	}
	return 0;
}

