#include<bits/stdc++.h>
using namespace std;

void resolve(int n, int k){
	string a = "A";
	string b = "B";
	string c;
	for(int i=3;i<=n;i++){
		string c = a + b;
		a = b;
		b = c;
	}
	cout<<b[k-1]<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		resolve(n,k);

	}

	return 0;
}

