#include<bits/stdc++.h>
using namespace std;

// backtracking 

const int N = 7;
const vector<pair<int,int>> dirs{{-1,0},{1,0},{0,1},{0,-1}};
long long ans;
bool visited[N][N];

void dfs(int row,int col){
	visited[row][col] = true;
	if(row==N-1 && col ==0){
		// the end
		for(int r=0;r<N;r++){
			for(int c=0;c<N;c++){
				if(!visited[r][c]){
					return ;
					}
				}
			}
		ans++;
		visited[row][col] = false ;
		return;
		}
		for(pair<int,int> dir : dirs){
			int r2 = row + dir.first;
			int c2 = col + dir.second;
			if(0<=min(r2,c2) && max(r2,c2) < N && !visited[r2][c2]){
				dfs(r2,c2);
				} 
			}
			visited[row][col] = false ;
	}
	
	int main(){
		dfs(0,0);
		cout<< ans <<'\n';
		}
