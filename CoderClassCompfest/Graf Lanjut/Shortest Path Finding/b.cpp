#include<bits/stdc++.h>

using namespace std ;
#define INF 400000001 
int dist[401][401] ;
int nxt[401][401] ;  
int main() {
	int n , m , q ;
	cin >> n >> m >> q ;
	for(int i = 1 ; i<= n ; i ++ ){
		for(int j = 1 ; j<= n ; j++){
			if (i == j )
				dist[i][j] = 0 ; 
			else
				dist[i][j] = INF ; 
		}
	}
	while ( m -- ) { 
		int a, b , w ; 
		cin >> a >> b >> w; 
		dist[a][b] = w ; 
		dist[b][a] = w ; 
	}

	
	for(int i = 1 ; i <= n ; i ++ ) { 
		for(int j = 1 ; j<= n ; j ++ ) {
			if (dist[i][j] == INF )
				nxt[i][j] = -1 ;
			else
				nxt[i][j] = j ; 
			}
		}
	for(int k = 1 ; k<= n ; k++ ) {
		for(int i = 1 ; i <=n ; i ++ ) {
			for(int j =1 ; j<= n ; j ++ ) {
				if ( dist[i][k] == INF  || dist[k][j] == INF ) 
					continue ;
				if ( dist[i][j] > dist[i][k] + dist[k][j] ) {
					
					dist[i][j] = dist[i][k] + dist[k][j] ; 
					nxt[i][j] = nxt[i][k] ;
				}
			}
		}
	}

	
	while (q--) { 
		int u , v; 
		cin >> u >> v ;
		vector<int> route = { u } ; 
		while  ( u != v) {
			u = nxt[u][v] ; 
			route.push_back(u); 
		}
		for (int i = 0 ; i < route.size() ; i ++ ) {
			cout << route[i] ;
			if ( i != route.size() - 1 ) 
				cout <<  " " ; 
		}
		cout << endl ;
	}
}
