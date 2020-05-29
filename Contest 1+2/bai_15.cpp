#include<bits/stdc++.h>
using namespace std;

string s;
int n;

void convertStringToArr(string s, int x[]){
	for(int i=0;i<s.length();i++){
		x[i+1]=(int) (s[i]-48);
	}
}

bool genNext(int a[],int n){
	int k=n;
	while(a[k-1]>=a[k]) k--;
	if(k==1){
		return true;
	}else{
		sort(a+k,a+n+1);
		for(int i=k;i<=n;i++){
			if(a[i]>a[k-1]){
				swap(a[i],a[k-1]);
				break;
			}
		}
		return false;
	}
}

void display(int a[],int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int x[2000];
		int stt;
		bool isBiggest;
		cin>>stt>>s;
		n=s.length();
		convertStringToArr(s,x);
		isBiggest =  genNext(x,n);
		cout<<stt<<" ";
		if(isBiggest){
			cout<<"BIGGEST"<<endl;
		}else{
			display(x,n);
		}
			
	}
	return 0;
}
