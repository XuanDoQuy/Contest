#include<bits/stdc++.h>
using namespace std;

string s;

string genNext(string s){
	int pos = s.length()-1;
	while(s[pos]=='1')pos--;
	if(pos<0){
		for(int i=0;i<s.length();i++){
			s[i]='0';
		}
	}else{
		s[pos]='1';
		for(int i=pos+1;i<s.length();i++){
			s[i]='0';
		}
	}
	return s;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<genNext(s)<<endl;		
	}

	return 0;
}
