#include<bits/stdc++.h>

using namespace std ;
vector<pair<int,int>> adj[100001];
vector<long long> dist (100001,10000000001);
set<pair<long long,int>> s ;
int main() {
	int n  , m ; 
	cin >> n  >> m ; 
	dist[1] = 0 ;
	for(int i = 0 ; i < m ; i++ ) { 
		int a , b, w ; 
		cin >> a >> b >> w ;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}
	s.insert({0,1});
	
	while(!s.empty()){
			auto tmp = *s.begin();
			int u = tmp.second ; 
			s.erase(s.begin());
			for ( auto & r : adj[u] ) {
				int v = r.first ;
				int w = r.second ; 
				if ( dist[u] + w < dist[v] ) { 
					if (dist[v] != INT_MAX ){
						s.erase({dist[v],v});
					}
					dist[v] = dist[u] + w ;
					s.insert({dist[v],v});
				}
				
			}
			
		
	}
	cout << dist[n] << endl ;
}
