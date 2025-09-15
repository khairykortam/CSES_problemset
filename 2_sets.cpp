#include<bits/stdc++.h>
using namespace std;

// constructive problem
// Sum - > even -> maybe 
// Sum -> odd -> cannto spit

// proof by inariant : after considering vals n..x , the sum differs by at most x
// A: n , n-3, n-4,n-7, ...
// B: n-1, n-2, n-5, n-6 , ...
// notice: sum is fixed in both
// try implemeting groups of 4 
int main(){
	int n;cin>>n;
	vector<int> a,b;
	long long A=0,B=0;
	for(int x=n;x>=1;--x){
if(A>B) { 
	b.push_back(x);
	B+=x;
	}
	else {
		a.push_back(x);
		A+=x;
		}	
	}
	if(A==B){
	 cout<<"YES\n";
	 cout<<a.size()<<'\n';
	 for(int x:a){
		 cout<<x<<" ";
	 }
	 cout<<'\n';
	
	 cout<<b.size()<<'\n';
	 for(int x:b){
		 cout<<x<<" ";
		 }
		 cout<<"\n";
	 }
	 else {
		 cout<<"NO\n";
		 }
	}
