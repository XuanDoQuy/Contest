#include<bits/stdc++.h>
using namespace std;

void resolve(string s){
	map<char,int> mymap;
	map<char,int> :: iterator i;
	int maxsize=0;
	for(int i=0;i<s.length();i++){
		mymap[s[i]]++;
	}
	for(i=mymap.begin();i!=mymap.end();i++){
		if(i->second > maxsize){
			maxsize = i->second;
		}
	}
	if (s.length() >= 2*maxsize-1){
		cout<<1<<endl;
	}else{
		cout<<-1<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		resolve(s);
	}

	return 0;
}

