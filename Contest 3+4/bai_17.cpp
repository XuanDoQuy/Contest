#include<bits/stdc++.h>
using namespace std;

struct CharFred{
	char c;
	int f;
};


void resolve(int k, string s){
	map<char,int> mp;
	map<char,int> :: iterator it;
	priority_queue<int> p;
	long long res = 0;
		
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	
	for(it=mp.begin();it!=mp.end();it++){
		p.push(it->second);
	}
	
	while(k--){
		int f = p.top();
		p.pop();
		f--;
		p.push(f);
	}
	while(!p.empty()){
		int temp = p.top();
		p.pop();
		res = res + temp*temp;
	}
	
	cout<<res<<endl;
	
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		resolve(k,s);
	}

	return 0;
}

