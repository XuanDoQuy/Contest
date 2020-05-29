#include<bits/stdc++.h>
using namespace std;

int x[100];
bool isUsed[100]={false};
int n;

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!isUsed[j]){
			x[i]=j;
			isUsed[j]=true;
			if(i==n){
				display();
			}else{
				Try(i+1);
			}
			isUsed[j]=false;
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

