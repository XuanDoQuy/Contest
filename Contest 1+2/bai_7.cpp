#include<bits/stdc++.h>
using namespace std;

int x[100]={0};
int n,sum=0;

void init(){
	x[0]=100;
	for(int i=1;i<=n;i++){
		x[i]=0;
	}
}

void display(){
	cout<<"(";
	for(int i=1;i<=n;i++){
		if(x[i]!=0){
			if(i==1){
				cout<<x[i];
			}else{
				cout<<" "<<x[i];
			}			
		}
	}
	cout<<") ";
}

void Try(int i){
	for(int j=n;j>=1;j--){
		if(j<=x[i-1]){
			sum=sum+j;
			if(sum>n){
				sum=sum-j;
				continue;
			}
			x[i]=j;
			if(sum==n){
				display();
			}else{
				Try(i+1);
			}
			sum=sum-j;
			x[i]=0;
		}		
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		init();
		Try(1);
		cout<<endl;
	}

	return 0;
}

