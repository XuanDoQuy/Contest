#include<bits/stdc++.h>
using namespace std;

void resolve(int tu, int mau){
	if (tu == 0||mau == 0) return;
	if (tu % mau == 0){
		cout<< tu / mau ;
		return ;
	}
	if (mau % tu == 0){
		cout<<"1"<<"/"<<mau/tu;
		return ;
	}
	if(tu > mau){
		cout<< tu / mau <<"+";
		resolve(tu - (tu/mau) * mau, mau);
	} 
	if (tu < mau){
		int k = mau/tu + 1;
		cout<<"1/"<<k<<"+";
		resolve(tu*k-mau,mau*k);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		resolve(x,y);
		cout<<endl;
	}

	return 0;
}

