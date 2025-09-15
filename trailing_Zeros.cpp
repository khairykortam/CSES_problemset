#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;cin>>n;
	long long answer =0;
	for(long long i=5;i<=n;i*=5){
		answer += n / i;
		}
		cout<< answer <<'\n';
	}
 
 // 1e9 operations -> 5 seconds
 // brute force is O(N^2) total ( it will take years )
 
 // number of trailing zeros = number pairs(2,5) : 2 is more common but 5 is more rare
 
 // lemma : # of multiples of 5 is smaller than number of multiples of 2
   //       # of            25 is smaller than 4 ....
   
 
