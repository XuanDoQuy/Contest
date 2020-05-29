#include<bits/stdc++.h>
using namespace std;

int n,S,sum = 0;
int c[100];
int x[100];
bool ok = false;
int soTTMin = 100;

void progress(){
	int soToTien = 0;
	for(int i=1;i<=n;i++){
		soToTien += x[i];
	}
	if (soToTien<soTTMin) soTTMin = soToTien;
}

void back(int i){
	for(int j=1;j>=0;j--){
		sum += j*c[i];
		x[i] = j;
		if(i==n){
			if(sum == S) {
				progress();
				ok = true;
			}			
		}else if(sum<=S){
			back(i+1);
		}
		sum -= j*c[i];
	}
}

int main() {
	int t;
	t=1;
	while(t--){
		cin>>n>>S;
		for(int i=1;i<=n;i++){
			cin>>c[i];
		}
		sort(c+1,c+n+1,greater<int>());
		back(1);
		if(ok){
			cout<<soTTMin;
		}else{
			cout<<-1;
		}
		cout<<endl;
	}

	return 0;
}

