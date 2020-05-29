#include<bits/stdc++.h>
using namespace std;

int n;
bool isUsed[100]={false},xuoi[100]={false},nguoc[100]={false};
int x[100];
int c;

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;	
}

void back(int i){
	for(int j=1;j<=n;j++){
		if(isUsed[j] == false && xuoi[i-j+n] == false && nguoc[i+j-1] == false){
			x[i] = j;
			isUsed[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
			if(i == n){
				c++;
			}else{
				back(i+1);
			}
			isUsed[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
		}
	}
}

int main() {
	int t;
	t=1;
	while(t--){
		c=0;
		cin>>n;
		back(1);
		cout<<c<<endl;
	}

	return 0;
}

