#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x){
	int s = 1;
	int e = n;
	while (s <= e){
		int m = (s + e) / 2;
		if (arr[m] == x) return m;
		if (x < arr[m]) e = m - 1;
		if (x > arr[m]) s = m + 1;
	}
	return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		int a[100000];
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int res = binarySearch(a,n,x);
		if (res != -1) {
			cout<<res<<endl;
		}else cout<<"NO"<<endl;
		
	}

	return 0;
}

