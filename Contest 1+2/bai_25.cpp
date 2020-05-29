#include<bits/stdc++.h>
using namespace std;
//run time

bool ok;
int n,k,sum = 0;
int x[101];
int a[101];

void back_track(int i){
	for(int j=1;j>=0;j--){
		x[i] = j;
		sum += j*a[i];
		if(i==n){
			if(sum==k) {	
				ok = true;
			}		
		}else {
			back_track(i+1);
		}
		sum -= j*a[i]; 
	}
}


int main() {
	int t;
	cin>>t;
	while(t--){	
		k = 0;	
		cin>>n;
		for(int i=1;i<=n;i++){
			a[i] = i;
			k+=a[i];
		}
		sort(a,a+n+1);
		if(k%2!=0){
			cout<<"NO";
		}else{
			k = k/2;
			back_track(1);
			if(ok){
				cout<<"YES";
			}else{
				cout<<"NO";
			}
		}
		cout<<endl;
	}

	return 0;
}

