#include<bits/stdc++.h>
using namespace std;

string resolve(string s, int k){
	int n = s.length();
	for(int i=0;i<n;i++){
		int max = s[i];
		int pos = i;
		for(int j=i;j<n;j++){
			if(s[j]>=max){
				max = s[j];
				pos = j;
			}
		}
		if (max != s[i] && k>0){
			swap(s[pos],s[i]);
			k--;
		}
	}
	return s;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>k;
		cin>>s;
		cout<<resolve(s,k)<<endl;
	}
	return 0;
}

