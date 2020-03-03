#include <bits/stdc++.h>

using namespace std ;



int main () { 
	int n  , a , b , k ; 
	int ans  = 0 ; 
	cin >> n >> a >> b >> k ; 
	
	vector <int> h(n)  ;
	for ( int i = 0 ; i  < n ; i ++ ) 
		cin >> h[i] ;
		
	for ( int i = 0  ; i < n ; i ++ ) 	 { 
		h[i] %= (a + b ) ; 
		if ( h[i] == 0 ) h[i] += a+ b ; 
		h[i] -= a; 
	}
	
	
	
	sort(h.begin(), h.end() ) ; 
	
		for ( int i = 0  ; i < n ; i ++ ) 	 { 
			if ( h[i] <= 0 ) 
				ans ++ ; 
			else {
				if ( k!= 0 ) {
					int coef ; 
					if ( h[i] % a == 0 ) coef = h[i] / a ;
					else coef = h[i] / a + 1 ;
					//cout << coef << " " ;
					if ( k >= coef ) {	
						k-= coef ; 
						ans++ ; 
					} 
					}
					
				}
				
			}
			cout << ans << endl ; 
		}
	

	
