#include<bits/stdc++.h>

using namespace std ;
vector<int> adj[50001];
bool visited[50001];

void dfs(int n ) {
	visited[n] = true ; 
	for( auto & r : adj[n] ) { 
		if ( visited[r]  ) { 
			cout << "konflik" << endl ;
			exit(0);
		}else {
			if(!visited[r] ){
				dfs(r);
			}
		}
	}
}

int main () { 
	
	int n , m ; 
	memset(visited,false,sizeof(visited));
	cin >> n >> m ;
	while ( m--) {
		int x, y ; 
		cin >> x >> y ; 
		adj[x].push_back(y);
		
	}
	for(int i = 1 ; i <= n ; i ++ ) { 
		if ( !visited[i] )
			dfs(i);
	}
	cout << "aman" << endl ;
}
