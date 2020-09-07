#include<bits/stdc++.h>

using namespace std ;

int visited[100001];
int start ;
int bestcost ; 
vector<int> adj[100001] ;
int dfs(int n,int cost) {
	//cout << cost << " " << n << endl ;
	visited[n] = cost ; 
	if ( cost > bestcost ) {
		bestcost = cost ;
		start = n ; 
	}
	for(auto & r : adj[n] ) {
		if ( visited[r] == -1 ) {
			dfs(r,cost+1);
		}
	}
	return 0 ;
}
int main () { 
		int n ; 
		bestcost = -1 ;
		cin >> n ;
		memset(visited,-1,sizeof(visited));

		for(int i = 0 ; i < n-1 ; i ++ ) { 
			int x , y ; 
			cin >> x >> y; 
			adj[x].push_back(y);
			adj[y].push_back(x) ;
			
		}
	dfs(1,0);
	memset(visited,-1,sizeof(visited));
	bestcost = 0; 
	//cout << "BATAS DFS 1" << endl ;
	dfs(start,0);
	cout << bestcost << endl; 
}
