#include<bits/stdc++.h>

using namespace std ;
vector<int> adj[50001];
bool visited[50001];
bool recstack[50001];
int sz ; 
vector<int> ans ; 
bool dfs(int n) {
	visited[n] = true ; 
	recstack[n] = true ; 
	for( auto & r : adj[n] ) { 
		if(visited[r] && recstack[r] ){
			for(int i = 0 ; i <sz ; i ++ ) { 
				cout << -1 ;
				if  ( i != sz-1 )
					cout << " " ; 
			}
			cout << endl ; 
			exit(0);
		}
		else if (!visited[r]){
			dfs(r);
		}
	}
	ans.push_back(n);
	recstack[n] = false ;
	return false ; 
}

int main () { 
	
	int  m ; 
	memset(visited,false,sizeof(visited));
	memset(visited,false,sizeof(recstack));
	cin >> sz >> m ;
	while ( m--) {
		int x, y ; 
		cin >> x >> y ; 
		adj[x].push_back(y);
		
	}
	for(int i = 0 ; i <= 50000 ; i ++ ) {
		sort(adj[i].begin(),adj[i].end(),greater<int>());
	}
	for(int i = sz ; i>=1 ; i -- ) { 
		if ( !visited[i] )
			dfs(i);
	}
	reverse(ans.begin(),ans.end());
	for( int i = 0 ; i < sz ; i ++ ) { 
		cout << ans[i] ; 
		if ( i != sz-1 )
			cout << " " ; 
	}
	cout << endl ;
}
