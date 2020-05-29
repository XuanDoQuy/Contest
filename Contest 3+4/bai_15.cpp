#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		float res = (n*(s-s/7))/(m*s);
		if (res >= 1){
			int k = (m*s)/n;
			if((m*s) % n == 0){
				cout<<k<<endl;
			}else{
				cout<<k +1<<endl;
			}
		}else{
			cout<<-1<<endl;
		}

	}

	return 0;
}

