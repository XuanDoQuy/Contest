#include<bits/stdc++.h>
using namespace std;

void resolve(int sum){
	//sum = a*4 + b*7
	//sum = a*4 + x; neu tim duoc x=7b hay x%7=0 thi co ket qua;
	int a = 0,b = 0;
	while(sum > 0){
		if(sum%7==0){
			b++;
			sum-=7;
			continue;
		}
		if(sum%4==0){
			a++;
			sum-=4;
			continue;
		}
		a++;
		sum-=4;
	}
	if(sum < 0){
		cout<<-1<<endl;
		return ;
	}
	for(int i=0;i<a;i++){
		cout<<4;
	}
	for(int i=0;i<b;i++){
		cout<<7;
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int sum;
		cin>>sum;
		resolve(sum);
	}

	return 0;
}

