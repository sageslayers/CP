#include<bits/stdc++.h>

using namespace std ;
vector<pair<int,int>> adj[100001] ;
long long dp[100001];
void dfs(int n , long long cost ) { 
	//cout << n << " " << cost << endl ; 
	for(auto & r : adj[n] ) { 
		//cout << n << " " << r.first << " " << r.second << " " << cost << endl ;
		if ( cost + r.second > dp[r.first] ) {
			
			dp[r.first] = cost + r.second ; 
			dfs(r.first,cost+r.second);
		}
	}
}
int main() { 
	int n , m ; 
	cin >> n >> m ;
	memset(dp,-1,sizeof(dp));
	while(m--){
		int x , y , t ; 
		cin >> x >> y >> t; 
		adj[x].push_back({y,t});
	}
	dfs(1,0);
	cout << dp[n] << endl ; 
}
