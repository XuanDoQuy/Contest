#include<bits/stdc++.h>
using namespace std;

void resolve(int s, int d){
	string res;
	res.resize(d);
	if (s <= 9*d){
		if (s%9 == 0){
			int count9 = s/9 - 1; 
			int pos = d-1;
			while(count9--){
				res[pos] = '9';
				pos--;
			}
			if(pos == 0){
				res[pos] = '9';
			}else{
				res[pos] = '8';
				pos--;
				while(pos != 0){
					res[pos] = '0';
					pos--;
				}
				res[pos] = '1';
			}			
		}else{
			int count9 = s/9;
			int pos = d - 1;
			while(count9--){
				res[pos] = '9';
				pos--;
			}
			if(pos == 0){
				res[pos] = (s%9)+48;
			}else{
				res[pos] = (s%9) + 48 - 1;
				pos--;
				while(pos != 0){
					res[pos] = '0';
					pos--;
				}
				res[pos] = '1';
			}
		} 
	}else{
		cout<<-1<<endl;
		return;
	}
	cout<<res<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		resolve(s,d);
	}

	return 0;
}

