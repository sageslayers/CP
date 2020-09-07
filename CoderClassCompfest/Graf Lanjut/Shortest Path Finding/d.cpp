#include<bits/stdc++.h>
using namespace std ;
vector<pair<int,int>> adj[100001];
vector<pair<int,int>> dist ( 100001,{INT_MAX,0});
int main () { 
	int n , m;
	cin >> n >> m ; 
	
	dist[1] = {0,1} ;
	set<pair<int,long long>> s ;
	while ( m-- ) { 
		int a, b, w ; 
		cin >> a >> b >> w ;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}
	s.insert({0,1});
	while ( !s.empty() ) {
		auto it = *s.begin() ; 
		int u = it.second ; 
		s.erase(s.begin());
		for ( auto & r : adj[u] ) {
			int v = r.first ; 
			int w = r.second ; 
			if( dist[u].first + w < dist[v].first ) { 
				if( dist[v].first != INT_MAX ) {
					s.erase({dist[v].first,v});
				}
				dist[v].first = dist[u].first + w ;
				dist[v].second = dist[u].second ;
				s.insert({dist[v].first,v});
			}
				else if( dist[u].first + w == dist[v].first ) { 
				dist[v].second = (dist[v].second +  dist[u].second) % 1000000007;
			}
		}
		
	}

	cout << dist[n].second << endl ;
	
}
