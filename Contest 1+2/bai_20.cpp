#include<bits/stdc++.h>
using namespace std;

long long x[1000000];

void display(long long x[],int n){
	cout<<"[";
	for(int j=1;j<=n;j++){
		if(j==n){
			cout<<x[j];
		}else{
			cout<<x[j]<<" ";
		}
	}
	cout<<"] ";	
}

void back_track(long long x[],int n){
	if (n<1){
		return;
	}else{
		long long z[n];
		for(int j=1;j<=n;j++){
			z[j] = x[j] + x[j+1];
		}
		back_track(z,n-1);
		display(x,n);
	}
	
}


int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x[i];
		}
		back_track(x,n);
		cout<<endl;
	}

	return 0;
}

