#include<bits/stdc++.h>
using namespace std;

int x[100];
int c[1000][1000];
int z[1000][1000];
bool isUsed[100]={false};
int n,k,tmp=0,r=1;

void insert(){
	for(int i=1;i<=n;i++){
		z[r][i]=x[i];
	}
}
bool invalid(){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+c[i][x[i]];
	}
	if(sum==k) return true;
	else return false;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!isUsed[j]){
			x[i]=j;
			isUsed[j]=true;
			if(i==n){
				if(invalid()) {
					tmp++;
					insert();
					r++;
				}
			}else{
				Try(i+1);
			}
			isUsed[j]=false;
		}
	}
}

int main() {
	int t=1;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>c[i][j];
			}
		}
		Try(1);
		cout<<tmp<<endl;
		for(int i=1;i<r;i++){
			for(int j=1;j<=n;j++){
				cout<<z[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}

