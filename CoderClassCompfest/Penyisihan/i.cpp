#include<bits/stdc++.h>

using namespace std ;
map<pair<int,int>,int> mp ; 
vector<int> adj [100001];
int visited[100001] ; 

void dfs (int n,int parent ) {
	visited[n] = parent;
	for ( auto & r : adj[n] ) {
		if(visited[r] == 0 ) {
			dfs(r,n);
		}
		else {
			if ( r != parent ) {
				//cout << "#" << n << " " << r << " " << visited[r] << endl ;
				cout << "Bukan pohon" << endl ; 
				exit(0);
			}
		}
	}
}

int main () { 
	memset(visited,0,sizeof(visited));
	int n ; 
	cin >> n ; 
	int m1 ;
	cin >> m1 ;
	int m11 = m1;
	while(m1--){
		int u , v; 
		cin >> u >> v ;
		if ( v > u )
			swap(u,v);
		mp[{u,v}]++;

	}
	int m2 ; 
	cin >> m2 ;
	int m22 = m2 ; 
	if ( n == 1 && (m11 == 0 || m22 == 0) ){
		cout << "Pohon" << endl ;
		exit(0);
		
	}
	while (m2--){
		int u ,v ; 
		cin >> u >> v; 
		if ( v > u )
			swap(u,v);
		mp[{u,v}]++;
	
	}
	
	for( auto & r  : mp ) {
		if ( r.second == 1 ) {
			adj[r.first.first].push_back(r.first.second);
			adj[r.first.second].push_back(r.first.first);
		}
	}
	
	for(int i = 1 ; i <= n ; i ++ ) {
		if ( visited[i] == 0 && adj[i].size() > 0 ){
			dfs(i,i);
		}
	}
	for(int i = 1 ; i <= n ; i ++ ) {
		if ( visited[i] == 0 ){
			cout << "Bukan pohon" << endl; 
			exit(0);
		}
	}
	cout << "Pohon" << endl ;
	
}
