#include <bits/stdc++.h>


using namespace std ;
#define INF 1e9
vector<vector<int>> adj ;  

void bfs(int s,vector<int> &d){
d[s] = 0 ; 
queue<int> q ; 
q.push(s); 

while ( !q.empty() ) {
	int v = q.front() ;
	q.pop() ; 
	for ( auto & r : adj[v] ) { 
		if ( d[r] == INF ) {
			d[r] = d[v]+1 ; 
			q.push(r) ; 
		}
		
	}
	
}
		
}
	
	
	
int main() { 
	
	
	
	int t ; 
	cin >> t; 
	while (t--) {
		int n , m , a, b , c ; 
		
		cin >> n >> m >> a >> b >> c ;
		adj = vector<vector<int>> (n) ; 
		a-- ; b-- ; c-- ;  
		vector<long long> prices(m);  
		vector<long long> pref(m+1);
	
		vector<int> da(n,INF) , db(n,INF), dc(n,INF); 
		for( int i = 0 ; i < m ; i ++ ) 
			cin >> prices[i] ; 
		sort(prices.begin(),prices.end()) ; 
		for (int i = 0 ; i <m ; i ++ ) 
			pref[i+1] = pref[i] + prices[i] ; 
		for ( int i = 0 ; i < m ; i ++ ) {
			int x,  y ; 
			cin >> x  >> y; 
			x--;
			y--; 
			adj[x].push_back(y) ; 
			adj[y].push_back(x); 
		}
		bfs(a,da) ; 
		bfs(b,db) ; 
		bfs(c,dc) ;
		/*
		for ( auto & r : da ) 
			cout << r << "  " ; 
			cout << endl ; 
		for ( auto & r : db ) 
			cout << r << "  " ; 
			cout << endl ; 
		for ( auto & r : dc ) 
			cout << r << "  " ; 
			cout << endl ; 
		for ( auto & r : prices ) 
			cout << r << "  " ; 
			cout << endl ; */
		long long ans  = 1e18 ; 
		for ( int i = 0 ; i < n ; i ++ )  {
			if ( da[i] + db[i] + dc[i] > m )
				continue ; 
		//	cout << "#" << da[i] << " " << db[i] << " " << dc[i] << endl ;
			long long now = pref[db[i]] + pref [da[i] + db[i] + dc[i] ] ;
		//	cout << ans << " " << now << endl ; 
			ans = min ( ans , now  ); 
			
		}
		 cout << ans << endl ; 
		
		
		
	}
	
	
	
	
}
