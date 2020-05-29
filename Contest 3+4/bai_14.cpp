#include<bits/stdc++.h>
#include<string>
using namespace std;

//to_string

string convert_string(long long x){
	string res = "";
	while(x>0){
		char c = x%10 + 48;
		res = c + res;
		x=x/10;
	}
	return res;
}


void resolve(long long n){
	vector<string> v;
	
	string numN = convert_string(n);
	
	for(int i=1;i*i*i<=n;i++){
		long long temp = i*i*i;
		v.push_back(convert_string(temp));
	}
	
	for(int i = v.size()-1; i>=0; i--){
		string curr = v[i];
		int pos = 0;
		for(int j=0; j<numN.length(); j++){
			if(numN[j] == curr[pos]){
				pos++;
			}
			if(pos == curr.length()){
				cout<<curr<<endl;
				return;
			}
		}
	}
	cout<<-1<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		resolve(n);
	}

	return 0;
}

