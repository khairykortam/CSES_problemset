#include<bits/stdc++.h>
using namespace std;


int main(){
	int H,W; cin>>H>>W;
	vector<string> a(H);
	for(string& row : a){
		cin>>row;
		}
		// O(H*W)
		for(int row=0;row<H;row++){
			for(int col=0;col<W;col++){
			set<char> s;
			if(row!=0){
				s.insert(a[row-1][col]);
				}
				if(col!=0){
					s.insert(a[row][col-1]);
					}
					s.insert(a[row][col]);
					for(char x='A';x<='D';x++){
						if(!s.count(x)){
							a[row][col] =x;
							break;
							}
						}
					}
					
					cout<<a[row]<<"\n";
			}
			// inspired by the 4 colors problem
	}
