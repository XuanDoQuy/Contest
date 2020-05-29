#include<bits/stdc++.h>
using namespace std;

int x[1000000];
int n;

long long resolve(){
	long long result = 0;
	sort(x,x+n);
	for(int i=0;i<n;i++){
		result = (result + x[i]*i) % 1000000007 ;                  
	}
	return result;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		cout<<resolve()<<endl;
	}

	return 0;
}

