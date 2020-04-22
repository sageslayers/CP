#include<bits/stdc++.h>

using namespace std ;
#define max_n 200005 

vector<int> adj[max_n] ;

int sizeZ[max_n] = {0} ; 
int depth[max_n] = {0} ; 
int res[max_n] ; 

int dfs(int u,int v ) {
	sizeZ[u] = 1;  
	depth[u] = depth[v]+1 ; 
	for (auto & r : adj[u] ) {
		if ( r == v ) continue ; 
		sizeZ[u]+= dfs(r,u) ; 
	}
	res[u] = sizeZ[u] - depth[u] ; 
	return sizeZ[u] ; 
}

int main () { 
int n  , k ; 
cin >> n >> k ; 
for (int i = 1 ; i < n ; i++ ) { 
	int x , y;  
	cin >> x >> y;  
	adj[x].push_back(y) ; 
	adj[y].push_back(x) ; 	
}	
dfs(1,0); 	
sort(res+1,res+n+1,greater<int>()); 
long long int ans = 0 ; 

for (int i = 1 ; i < n-k+1 ; i ++  ) { 
	ans+= res[i] ; 
}
	cout << ans << endl ; 
}
