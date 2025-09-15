#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	sort(s.begin(),s.end());
	vector<string> ans;
	do {
		ans.push_back(s);
		} while (next_permutation(s.begin(),s.end()));
		cout<< ans.size()<<'\n';
		for(string c : ans){
			cout<< c <<'\n';
			}
	}
	
	// in C++: if you have a str / vect/ arr and you want to try all the orders 
	// sort -> next_permutation func
	// sytax : sort(s.begin(), s.end()) ; 
	// do {
	//   // do sth. ex: cout<< s<<'\n';
	// }while(next_permutation(s.begin(),s.end()));
	
	// in this problem and others, recursion may produce better time complexity
	
