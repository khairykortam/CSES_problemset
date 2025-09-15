#include<bits/stdc++.h>
using namespace std;

int main(){
	int max_n;cin>>max_n;
	for(long long n=1;n<=max_n;n++){
		long long  size = n*n;
		long long allWays = size * (size-1) / 2;
		long long invalidWays =0; // when they attack each other
		invalidWays += 8 * (n-4) *(n-4) ;
		invalidWays += 6 * (n-4) * 4 ;
		invalidWays += 4 * (n-3) * 4 ;
		invalidWays += 3 * 8  ;
		invalidWays += 2 * 4  ;
		invalidWays /= 2;
		cout<<allWays - invalidWays <<'\n';   
	}
}
 // O(N)
 // Proof by MAGIC 
