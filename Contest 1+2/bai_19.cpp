#include<bits/stdc++.h>
using namespace std;

int x[1000000];
int n;

void result(){
	
	for(int i=2;i<=n;i++){
		cout<<"[";
		for(int j=1;j<=n-i+1;j++){
			x[j] = x[j] + x[j+1];
			if (j==n-i+1){
				cout<<x[j]<<"]";
			}else{
				cout<<x[j]<<" ";
			}			
		}
		cout<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;		
		for(int i=1;i<=n;i++){
			cin>>x[i];			
		}
		cout<<"[";
		for(int i=1;i<=n;i++){
			if(i==n){
				cout<<x[i]<<"]";
			}else{
				cout<<x[i]<<" ";
			}
		}
		cout<<endl;
		result();
	}

	return 0;
}

