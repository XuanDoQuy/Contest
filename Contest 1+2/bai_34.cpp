#include<bits/stdc++.h>
using namespace std;

int n;
bool isUsed[100]={false},xuoi[100]={false},nguoc[100]={false};
int x[100];
int c[100][100];
int maxS=0;

void progress(){
	int score = 0;
	for(int i=1;i<=n;i++){
		score = score + c[i][x[i]];
	}
	if(score > maxS){
		maxS = score;
	}
}

void back(int i){
	for(int j=1;j<=n;j++){
		if(!isUsed[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
			x[i] = j;
			isUsed[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
			if(i == n){
				progress();
			}else{
				back(i+1);
			}
			isUsed[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
		}
	}
}

int main() {
	int t;
	t=1;
	while(t--){
		n=8;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>c[i][j];
			}
		}
		back(1);
		cout<<maxS<<endl;
	}

	return 0;
}
