#include<bits/stdc++.h>
using namespace std;
 
 void test_case(){
	 int a,b;cin>>a>>b;
	 if((a+b) % 3 ==0 && a<=2*b && b<= 2*a){
		 cout<<"YES\n";
		 }
		 else { cout<<"NO\n";}       
	 }
 
 int main(){
	 int t;cin>>t;
	 while(t--){
		 test_case();
		 }
	 }
// (a+b) % 3 == 0 hypothesis
// a is not greater than half of b
