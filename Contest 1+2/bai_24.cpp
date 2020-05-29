#include<bits/stdc++.h>
using namespace std;

int x[10000];
int a[10000];
int n, k, sum = 0;
bool ok;

void display(){
	int k;
	cout<<"[";
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			k=i;
			cout<<a[i];
			break;
		}
	}
	for(int i = k+1 ;i<=n;i++){
		if(x[i]==1){
			cout<<" "<<a[i];
		}
	}
	
	cout<<"] ";
}

void back_track(int i){
	for(int j=1;j>=0;j--){
		x[i] = j;
		sum += j*a[i];
		if(i==n){
			if(sum==k) {
				display();	
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
		ok = false;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1,less<int>());
		back_track(1);
		if(ok == false) cout<<-1;
		cout<<endl;
	}

	return 0;
}

