#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int x,int dau,int cuoi){
	int i = (dau + cuoi) / 2;
	if (a[i] == x) return i;
	if (dau == cuoi) return -1;
	if (x > a[i]) return binarySearch(a,x,i+1,cuoi);
	if (x < a[i]) return binarySearch(a,x,dau,i-1);	 
}

bool resolve(vector<int> v, vector<int> x, int n){
	for(int i=0;i<n;i++){
		int m = binarySearch(x,v[i],0,n-1);
		if ( !(i == m || i == n-1-m)) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		vector<int> v,x;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			v.push_back(k);
			x.push_back(k);
		}
		sort(x.begin(),x.end());
		if (resolve(v,x,n)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}

