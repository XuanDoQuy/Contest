#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007;

long long resolve(int n, int k){
	long long res = 1;
	while(k--){
		res  = (res * n) % MAX;
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<resolve(n,k)<<endl;
	}

	return 0;
}

