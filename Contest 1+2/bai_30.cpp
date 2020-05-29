#include<bits/stdc++.h>
using namespace std;

bool isSNT[500] = {true};
vector<int> vSNT;
int result[500];
int n,p,s;
int num = 0;
int x[500][500];

void sangSNT(){
	for(int i=2;i<=200;i++){
		isSNT[i] = true;
	}
	for(int i=2;i<=200;i++){
		if(isSNT[i]){
			for(int j=2;i*j<=200;j++){
				isSNT[i*j] = false;
			}
		}		
	}
	for(int i=2;i<=200;i++){
		if(isSNT[i]) vSNT.push_back(i);
	}
}
vector<int> filter(){
	vector<int> filter;
	int last;
	vector<int> :: iterator first;
	first = find(vSNT.begin(),vSNT.end(),p);
	for(int i=0;i<vSNT.size();i++){
		if(vSNT[i] > s) {
			last = i-1;
			break;
		}
	}
	filter.assign(first,vSNT.begin()+last+1);
	return filter;
}

bool ok(){
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += result[i];
	}
	if (sum == s) return true;
	else return false;
}

void save(){
	num++;
	for(int i=1;i<=n;i++){
		x[num][i] = result[i];
	}
}

void display(){
	cout<<num<<endl;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=n;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
}

void back(int i,vector<int> x){
	for(int j=0;j<x.size();j++){
		if(x[j] > result[i-1]){
			result[i] = x[j];
			if(i == n){
				if(ok()) save();				
			}else{
				back(i+1,x);
			}
		}
	}
}


int main() {
	int t;
	cin>>t;
	sangSNT();
	while(t--){
		cin>>n>>p>>s;
		vector<int> v;
		v = filter();
		num  = 0;
		back(1,v);
		display();
	}

	return 0;
}

