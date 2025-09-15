#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	int n = s.length();
	int current =1,res=1;
	for(int i=1;i<n;i++){
		if(s[i-1]!=s[i]) current=0;
		current++;
		res = max(res,current);
		}
		cout<< res << '\n';
		return 0;
	}
