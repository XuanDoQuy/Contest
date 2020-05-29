#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		vector<int> x;
		int n,k;
		int p,sum1=0,sum2=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			x.push_back(k);
		}		
		if(k<n-k){
			p=k;		
		}else{
			p=n-k;
		}
		sort(x.begin(),x.end());
		for(int i=0;i<p;i++){
			sum1 += x[i];
		}
		for(int i=p;i<n;i++){
			sum2 += x[i];
		}
		cout<<sum2-sum1<<endl;		
	}

	return 0;
}

