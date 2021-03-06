#include<bits/stdc++.h>

using namespace std ;
vector<int> adj[50001];
bool visited[50001];
bool recstack[50001];

bool dfs(int n) {
	visited[n] = true ; 
	recstack[n] = true ; 
	for( auto & r : adj[n] ) { 
		if(visited[r] && recstack[r] ){
			cout << "konflik" << endl; 
			exit(0);
		}
		else if (!visited[r]){
			dfs(r);
		}
	}
	recstack[n] = false ;
	return false ; 
}

int main () { 
	
	int n , m ; 
	memset(visited,false,sizeof(visited));
	memset(visited,false,sizeof(recstack));
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
