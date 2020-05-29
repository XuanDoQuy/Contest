#include <bits/stdc++.h> 
  
using namespace std; 
  
  

long long minCost(vector<int> arr, int n) 
{ 
    // Create a priority queue ( http:// www.cplusplus.com/reference/queue/priority_queue/ ) 
    // By default 'less' is used which is for decreasing order 
    // and 'greater' is used for increasing order 
    priority_queue<int, vector<int>, greater<int> > pq(arr.begin(),arr.end()); 
  
    // Initialize result 
    long long res = 0; 
  
    // While size of priority queue is more than 1 
    while (pq.size() > 1) { 
        // Extract shortest two ropes from pq 
        int first = pq.top(); 
        pq.pop(); 
        int second = pq.top(); 
        pq.pop(); 
  
        // Connect the ropes: update result and 
        // insert the new rope to pq 
        res += first + second; 
        pq.push(first + second); 
    } 
  
    return res; 
} 
  
// Driver program to test above function 
int main() {
	int t;
	cin>>t;
	while(t--){		
		vector<int> v;
		int n;
		cin>>n;		
		for(int i=0;i<n;i++){
			int k;
			cin >> k;
			v.push_back(k);
		}
		cout<<minCost(v,n)<<endl;
	}
	return 0;
}
 

