#include<bits/stdc++.h>

using namespace std ;
vector <int> adj[10001] ; 
int main () { 
	int n , m , k ; 
	cin >> n >> m >> k ; 
	map<int,int> mp ;
	while(m--){
		int x , y ; 
		cin >> x >> y ; 
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = k ; i > 0 ; i-- ){
		int x; 
		cin >> x ;
		mp[x] = i ;
	}

	int sz = 1 ; 
	for(int i = 0 ; i < k ; i ++ ) { 
		sz*= 2 ; 
	}
	int dp[n+1][sz] ; 
	for(int i = 1 ; i <= n ; i ++ ) {
		for(int j = 0 ; j< sz ; j ++){
			dp[i][j] = n*n ;
		}
	}
	dp[1][0] = 0 ;
	queue<pair<int,int>> q ; 
	if ( mp[1] > 0 ) {
		int mask = 1 << mp[1] - 1 ; 
		q.push({1,mask});
		dp[1][mask]= 0 ;
	}
	else {
			q.push({1,0});
	}
	while(!q.empty()){
		int v = q.front().first;
		int mask = q.front().second;
		q.pop();
		for ( auto & r : adj[v] ) {
			int newmask = mask; 
			if ( mp[r] != 0 ) { 
				newmask = newmask |  (1 << (mp[r]-1)) ; 
			}
			if ( dp[v][mask]+1 < dp[r][newmask] ){
				q.push({r,newmask});
				dp[r][newmask] = dp[v][mask]+1 ;
			}
			
		}
		
		
	}
	cout << dp[1][sz-1] << endl ;
	
	
	
	
	
	
	
	
	
	
	
}
