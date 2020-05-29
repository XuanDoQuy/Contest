#include<bits/stdc++.h>
using namespace std;

struct CharFred{
	char c;
	int f;
};

bool comp(CharFred a, CharFred b){
	return a.f > b.f;
}

void resolve(string s,int d){
	CharFred chf[10000];
	int n = 0;//size of chf;
	map<char,int> mymap;
	map<char,int> :: iterator i;
	
	for(int i=0;i<s.length();i++){
		mymap[s[i]]++;
	}
	
	for(i=mymap.begin();i!=mymap.end();i++){
		chf[n].c = i->first;
		chf[n].f = i->second;
		n++;
	}
	
	sort(chf,chf+n,comp);

	string temp;
	temp.resize(s.length());
	
	for(int i=0 ;i<n; i++){
		CharFred x = chf[i];
		int p = i;
		while(temp[p]!=NULL){
			p++;
		}
		for(int k=0; k<x.f; k++){
			if (p + k*d >= s.length()){
				cout<<-1<<endl;
				return;
			}
			temp[p+d*k] = x.c;
		}		
	}
	cout<<1<<endl;
	
}


int main() {
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		resolve(s,k);		
	}

	return 0;
}

