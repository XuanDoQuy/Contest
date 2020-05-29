#include<bits/stdc++.h>
using namespace std;

long long factorial(int x){
	long long r=1;
	for(int i=2;i<=x;i++){
		r = r*i;
	}
	return r;
}

long long combination(int k, int n){
	long long a = factorial(n);
	long long b = factorial(k) * factorial(n-k);
	return (long long) a/b;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int m,n;
		int x[101][101];
		cin>>m>>n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>x[i][j];
			}
		}
		if (m==1&&n==1) cout<<0<<endl;
		else cout<<combination(m-1,m+n-2)<<endl;		
	}

	return 0;
}

