#include<bits/stdc++.h>
using namespace std;

bool genNext(int a[],int n,int k){
	int pos = k;
	while(a[pos] == n-k+pos) pos--;
	a[pos] ++;
	if(pos==0){
		return true;
	}else{
		for(int i = pos+1;i<=k;i++){
			a[i] = a[i-1]+1;	
		}
		return false;
	}	
}

bool isMember(int x,int a[],int k){
	for(int i=1;i<=k;i++){
		if(a[i]==x) return true;
	}
	return false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k,result=0;
		bool isFinal;
		cin>>n>>k;
		int x[1000];
		int z[1000];
		for(int i = 1; i <= k; i++){
			cin>>x[i];
			z[i]=x[i];
		}
		isFinal = genNext(x,n,k);
		for(int i=1;i<=k;i++){
			if(isMember(z[i],x,k)) result++;
		}
		if(isFinal) cout<<k<<endl;
		else cout<<k-result<<endl;
	}
	return 0;
}
