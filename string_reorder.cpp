#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	vector<int> freq(26);
	int n = s.length();
	
	for(char c : s){
		freq[c-'A']++;
		}
		string ans;
		while((int) ans.length() < n){
			bool anything = false;
			for(int i=0;i<26;i++){
				if(freq[i]>0 && (ans.empty() || ans.back() !=('A'+i))){
					freq[i]--;
					ans += ('A'+i);
					int suffix = n - (int) ans.length();
					bool can_finish = true;
					for(int j=0;j<26;j++){
						if(i!=j){
							if(freq[j]>(suffix+1)/2){
								can_finish = false;
								break;
								}
							}
							else {
								if(freq[j]>suffix/2){
									can_finish = false;
									break;
									}
								}
							}
								if(can_finish){
									anything = true;
									break;
									}
									else{
										freq[i]++;
										ans.pop_back();
										}
						
					}
				}
				if(!anything){
					break;
					}
			}
			if(ans.empty()){
				cout<<"-1\n";
				}
				else{
			cout<< ans <<'\n';
	}
}
