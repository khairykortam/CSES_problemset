#include<bits/stdc++.h>
using namespace std;

// O(N^3 * log(N)) 
int main(){
	int n;cin>>n;
	vector<vector<int>> a(n, vector<int>(n));
	for(int row=0;row<n;row++){
		for(int col =0;col<n;col++){
			// can istead of all the blob below use the following code
			// cout<<(row^ col) << " ";
			// may use a bool array
			set<int> s;
			for(int r=0;r<row;r++){
				s.insert(a[r][col]);
				}
				for(int c=0;c<col;c++){
					s.insert(a[row][c]);
					}
				int x=0;
				while(s.count(x)){
					x++;
					}
					a[row][col] = x;
					cout<< a[row][col]<< " ";
			}
			cout<<"\n";
		}
	}
