#include<bits/stdc++.h>
using namespace std;

void genNext(int a[],int n){
	int k=n;
	while(a[k-1]>a[k]) k--;
	if(k==1){
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
	}else{
		sort(a+k,a+n+1);
		for(int i=k;i<=n;i++){
			if(a[i]>a[k-1]){
				swap(a[i],a[k-1]);
				break;
			}
		}
	}
}
void display(int a[],int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		int x[2000];
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x[i];
		}
		genNext(x,n);
		display(x,n);	
	}
	return 0;
}

