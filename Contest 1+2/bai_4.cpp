#include<bits/stdc++.h>
using namespace std;

int x[100];
int n;

void display(){
	for(int i=1;i<=n;i++){
		if(x[i]==0){
			cout<<"A";
		}else{
			cout<<"B";
		}
	}
	cout<<" ";
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			display();
		}else{
			Try(i+1);
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}

	return 0;
}

