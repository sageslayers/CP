#include<bits/stdc++.h>

using namespace std ;



int main() {
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0) ; 
	int t ; 
	cin >> t; 
	while ( t--  ) { 
		int n ; 
		cin >> n ;
		vector<bool> choosed(n+1,false);  ;  
		vector<int> adj[n+1] ;
		vector<bool> daughter(n+1,false); 
		for( int i = 1 ; i <= n ; i ++ ) {
			int x; 
			cin >> x; 
			for (int j = 0 ; j < x ; j ++ ) {
				int y; 
				cin >> y;  
				adj[i].push_back(y); 
			}
			
		}
		 for (int i = 1 ; i <= n ; i ++ ) { 
			 for ( auto & r : adj[i] ) {
				 if (!choosed[r] ) {
					 choosed[r] = true ;
					 daughter[i] = true ;  
					 break ; 
				 }
				 
			 }
		 }
		 int count = 0  ; 
		 int fo = 1 ; 
		 for (int i = 1;  i <= n ; i ++ ) {
			if( !daughter[i] ) {
				cout << "IMPROVE" << endl ; 
				cout << i << " " ; 
				for (int j = 1 ; j <= n ; j ++ ) {
					if(!choosed[j]){
						cout << j << endl ;
						break ; 
					} 
				}
				fo = 0 ; 
				break ; 
			}
			
		 }
		 if ( fo == 1 )
		 cout << "OPTIMAL" << endl ; 
		 
	}
	
	
}
