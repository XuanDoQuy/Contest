#include<bits/stdc++.h>
using namespace std;

void genNext(int a[],int n,int k){
	int pos = k;
	while(a[pos] == n-k+pos) pos--;
	a[pos] ++;
	if(pos==0){
		for(int i=1;i<=k;i++){
			a[i]=i;
		}
	}else{
		for(int i = pos+1;i<=k;i++){
			a[i] = a[i-1]+1;
		}
	}	
}
void display(int a[],int k){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int x[1000];
		for(int i = 1; i <= k; i++){
			cin>>x[i];
		}
		genNext(x,n,k);
		display(x,k);
	}
	return 0;
}

