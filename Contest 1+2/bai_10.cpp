#include<bits/stdc++.h>
using namespace std;

int n;
string x[10000];
string xnp;

void init(){
	for(int i=1;i<=pow(2,n);i++){
		x[i]="";
	}
}

void display(){
	for(int i=1;i<=pow(2,n);i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

int convertToStp(string s){
	int stp=0;
	for(int i=s.length()-1;i>=0;i--){
		stp = stp + (s[i]-48)*(int)pow(2,s.length()-1-i);
	}
	return stp;
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
		int pos;
		cin>>xnp;
		n=xnp.length();
		init();
		Try(n);
		pos = convertToStp(xnp);
		cout<<x[pos+1]<<endl;
	}

	return 0;
}
