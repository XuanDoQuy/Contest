#include<bits/stdc++.h>
using namespace std;

int n;
string x[10000];
string xgr;

void init(){
	for(int i=1;i<=pow(2,n);i++){
		x[i]="";
	}
}

int find(string s){
	for(int i=1;i<=pow(2,n);i++){
		if(x[i].compare(s)==0){
			return i-1;
		}
	}
}

string convertToXnp(int x,int n){
	string xnp;
	while(x>0){
		xnp = (char) (x%2+48) + xnp;
		x=x/2;
	}
	for(int i = xnp.length();i<n;i++){
		xnp = "0" + xnp;
	}
	return xnp;
}

void Try(int i){
	for(int j=1;j>=0;j--){
		if(j==0){
			for(int k=1;k<=pow(2,n-i);k++){
				x[k]="0"+x[k];
			}
		}else{
			int z = (int) pow(2,n-i+1);
			for(int k=pow(2,n-i);k>=1;k--){
				x[z-k+1] = "1"+x[k];
			}
		}
	}
	if(i>1) Try(i-1); 
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>xgr;
		n=xgr.length();
		init();
		Try(n);
		int pos = find(xgr);
		//cout<<pos<<endl;
		cout<<convertToXnp(pos,n)<<endl;
	}
	return 0;
}


