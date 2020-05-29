#include<bits/stdc++.h>
using namespace std;

bool isUsed[10000];
int x[10000]={false};
int n;
string s;

void display(){
	for(int i=1;i<=n;i++){
		cout<<s[x[i]-1];
	}
	cout<<" ";
}

void back_track(int i){
	for(int j=1;j<=n;j++){
		if(!isUsed[j]){
			x[i]=j;
			isUsed[j] = true;
			if(i==n){
				display();
			}else{
				back_track(i+1);
			}
			isUsed[j] = false;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		n = s.length();
		back_track(1);
		cout<<endl;
	}

	return 0;
}

