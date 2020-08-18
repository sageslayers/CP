#include <bits/stdc++.h> 
using namespace std; 
int n , k ;
vector<vector<int>> conf[21];
int adj[21][21];
int maxs; 
void combination (int arr[], int idx,vector<int> cmb){
	if( idx == n+1){
		bool check = true ;
		int sz = cmb.size();
		int cnt = 0 ;
		for(int i = 0 ; i < cmb.size() ; i ++ ) {
			for(int j = 0 ; j < cmb.size() ; j ++ ) {
				if (i == j )
					continue ;
				else {
					if( adj[cmb[i]][cmb[j]] != 1 ){
						check = false ;
						break ; 
					}
				}
			}
			if(!check)
				break ; 
		}
		//cout << endl ;
		if ( check ){
				maxs = max(maxs,sz);
		}
		return ;
	}
	combination(arr,idx+1,cmb);
	cmb.push_back(arr[idx]);
	combination(arr,idx+1,cmb);
}


int main () {
	cin >> n >> k ; 
	int arr[n+1] ; 
	for(int i = 1 ; i <= n ; i ++ ) {
		arr[i] = i ; 
	}
	memset(adj,0,sizeof(adj));
	 maxs = 0 ;
	 vector<int> cmb ;
	while(k--){
		int x , y ;
		cin >> x >> y; 
		adj[x][y] = 1;
		adj[y][x] = 1; 
	}
	combination(arr,1,cmb);
		cout << maxs << endl ;
}
