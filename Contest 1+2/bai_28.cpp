#include<bits/stdc++.h>
using namespace std;

int x[50];
int a[50];
int n,m,k;
int sum = 0;
bool ok;

void display(){
	cout<<"[";
	for(int i=1;i<=k;i++){
		if(x[i]!=0){
			if(i==1) cout<<x[i];
			else cout<<" "<<x[i];
		}
	}
	cout<<"]"<<" ";
}

void back(int i){
	for(int j = 1; j <= n; j++){
		if(a[j] >= x[i-1]){
			sum = sum + a[j];
			x[i] = a[j];
			if(sum == m){
				display();
				ok = true;
			}else if(sum < m){
				back(i+1);
			}
			sum = sum - a[j];
			x[i] = 0;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		ok = false;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		k = (int) m / a[1];
		back(1);
		if(!ok) cout<<-1;
		cout<<endl;
	}
	return 0;
}

