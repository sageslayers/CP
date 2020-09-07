#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int src , dest ; 
	cin >> src >> dest ;
	int n, m  ;
	cin >> n >> m ;
	vector<pair<int,int>> adj[n+1] ;
	int dist[n+1];
	for(int i = 1 ; i<= n ; i ++ ) { 
		dist[i] = INT_MAX ; 
	}
	dist[1] = 0 ;  
	for(int i = 0 ; i < m ; i ++ ) {
		int a , b , w; 
		cin >> a >> b >> w ;
		adj[a].push_back({b,w}); 
	}
	bool cycle = false ; 
	for(int i = 1 ; i <= n ; i ++ ) { 
		for(int u = 1 ; u <= n ; u ++ ) { 
			for(auto & r : adj[u]){
				int v = r.first ; 
				int w = r.second ; 
				if ( dist[u] + w < dist[v] && dist[u] != INT_MAX ){
					dist[v] = dist[u] + w ;
					if ( i == n )
						cycle = true ; 
				}
			}
		}
	}
	if ( cycle ) 
		cout << "TIDAK" << endl ;
		
	else
		cout << "BISA" << endl ;
	
}
