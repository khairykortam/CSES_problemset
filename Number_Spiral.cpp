#include<bits/stdc++.h>
using namespace std;

void  test_case(){
	int row,col;
	cin>>row>>col;
	int layer = max(row,col);
	if(layer%2==1){
		swap(row,col);
		}
	if(col == layer){
		//vertical layer
		cout<<(long long)(layer-1)*(layer-1) +1 +row-1 <<"\n"; // let +1-1 for clarity
		}
		else { 
			assert(row==layer);
			cout<<(long long) layer * layer - (col-1) <<'\n';
			 }
		
	
	}

int main() {
	int t;cin>>t;
	while(t--){
		test_case();
		}
	
	}

// things in CP go (row, col) ,arr[row][col] not as in math  (x,y), or just as you prefer
