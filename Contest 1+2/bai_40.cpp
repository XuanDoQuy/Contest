#include<bits/stdc++.h>
using namespace std;

int x[100];
int c[50][50];
bool isUsed[100] = {false};
int n;
int xopt[100];
int fopt = 999999;
int cp = 0;
int cmin = 999999;

void progress(){
	int tcp = cp + c[x[n]][x[1]];
	if (tcp < fopt){
		fopt = tcp;
		for(int i=1;i<=n;i++){
			xopt[i] = x[i];
		}
	}
}

void back(int i){
	for(int j=2;j<=n;j++){
		if(!isUsed[j]){
			x[i] = j;
			cp += c[x[i-1]][x[i]];
			isUsed[j] = true;
			if(i == n){
				progress();
			}else if (cp + (n-i+1) * cmin < fopt){
				back(i+1);
			}
			cp -= c[x[i-1]][x[i]];
			isUsed[j] = false;
		}
	}
}

int main() {
	int t=1;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>c[i][j];
				if(c[i][j] < cmin&&c[i][j] != 0){
					cmin = c[i][j];
				}
			}
		}
		
		x[1] = 1;
		isUsed[1] = true;
		
		back(2);
		cout<<fopt<<endl;
	}

	return 0;
}

