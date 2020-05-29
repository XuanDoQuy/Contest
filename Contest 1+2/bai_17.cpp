#include<bits/stdc++.h>
using namespace std;

int x[1000000];
int n,k;
bool b;

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i]*9;
	}
	cout<<endl;
}

bool check(){
	for(int i=1;i<=n;i++){
		if(x[i]!=0) return true;
	}
	return false;
}

bool invalid(){
	if(check()){
		long long tmp=0;
		for(int i=1;i<=n;i++){
			tmp = (10*tmp+9*x[i])%k;		
		}
		if(tmp==0) return true;
		else return false;
	}else{
		return false;
	}	
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			if(invalid()) {
				if(b == true){
					display();	
					b = false;
				}							
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
		n = 1;
		b = true;
		cin>>k;
		while(b){
			Try(1);
			n++;
		}
	}
	return 0;
}

