#include<bits/stdc++.h>

using namespace std ;

int maxs ; 
int leaf; 
vector<int> adj[100001] ; 
bool visited[100001];

void dfs(int n,int depth) {
	//cout << n << " " << depth << endl ;  
	visited[n] = true ; 
	maxs = max(maxs,depth) ;
	if ( adj[n].size()  == 1 && visited[adj[n][0]]) {
	//	cout << "*" << n << endl ;
		leaf++;
	}
	for ( auto & r : adj[n] ) { 
		if ( !visited[r] ){
			dfs(r,depth+1);
		}
	}
	
	
}

int main() {
	maxs = -1 ;
	leaf = 0 ;  
	memset(visited,false,sizeof(visited));
	int n ; 
	cin >> n ; 
	for(int i = 2 ;	 i <= n ; i ++ ) { 
		int x ; 
		cin >> x;
		adj[i].push_back(x);
		adj[x].push_back(i);
	}
	
	dfs(1,0);
	if ( n == 1 )  {
		cout << 1 << " " << 0 << endl ;
	}else {
	cout << leaf << " " << maxs << endl ; 
	}
}
