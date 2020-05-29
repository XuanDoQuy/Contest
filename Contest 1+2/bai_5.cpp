#include<bits/stdc++.h>
using namespace std;

int x[100];
int n,k;

void display(){
	for(int i=1;i<=k;i++){
		cout<<x[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(j>x[i-1]){
			x[i]=j;
			if(i==k){
				display();
			}else{
				Try(i+1);
			}
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}

	return 0;
}

