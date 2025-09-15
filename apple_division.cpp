#include<bits/stdc++.h>
using namespace std;
 int n;
  int a[21];
  long long ans = LONG_LONG_MAX;
 
 // O(2^N)
 void f(int i, long long X, long long Y){
	 if(i == n){ 
		 ans = min(ans, abs(X-Y));;
		 return;
		 }
		 f(i+1, X+a[i],Y);
		 f(i+1, X, Y + a[i]);
	 
	 }
 
 int main(){
	 cin>>n;
	
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 }
		 f(0,0,0);
		 cout<< ans <<'\n';
	 
}

// suppose 10^8 operations per sec on avg
// probable time compexities based on input size : 

// N<= 5000 -> O(N^2)
// n<= 20 -> O(2^N) or maybe O(N!)
