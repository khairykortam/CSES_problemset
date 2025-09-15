#include<bits/stdc++.h>
using namespace std;
 int MOD  = 1000000007;
int main(){
	int n;cin>>n;
	int answer =1;
	for(int i=0;i<n;i++){
		answer = (2*answer) % MOD;
	}
	
	cout<< answer<<'\n' ;
}
// 2^N
