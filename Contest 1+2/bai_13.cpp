#include<bits/stdc++.h>
using namespace std;

int x[100];
int n,k;
int z[1000][1000];
int tmp=0;

bool invalid(){
	int max=0;
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(x[i]==0) tmp++;
		else tmp=0;
		if(tmp>max) max = tmp;
	}
	if(max == k){
		return true;
	}else{
		return false;
	}
}


void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			if(invalid()) {
				tmp++;
				for(int m=1;m<=n;m++){
					z[tmp][m]=x[m];
				}
			}
		}else{
			Try(i+1);
		}
	}
}

int main() {
	cin>>n>>k;
	Try(1);
	cout<<tmp<<endl;
	for(int i=1;i<=tmp;i++){
		for(int j=1;j<=n;j++){
			if(z[i][j]==0){
				cout<<"A";
			}else{
				cout<<"B";
			}
		}
		cout<<endl;
	}
	return 0;
}
