#include<bits/stdc++.h>
using namespace std;

int x[100];
int n,k;

bool invalid(){
	int tmp=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1) tmp++;
	}
	if(tmp==k) return true;
	else return false;
}

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			if(invalid()){
				display();
			}
		}else{
			Try(i+1);
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}

	return 0;
}
