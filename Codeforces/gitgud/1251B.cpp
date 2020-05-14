#include <bits/stdc++.h>

using namespace std ;

int main () {
	int t;  
	cin >> t; 
	while (t-- ) { 
		int n ; 
		cin >> n  ; 
		vector<string> str(n) ;
		int one = 0 ; 
		int zero = 0 ;  
		int ganjil = 0 ; 
		int genapburuk = 0 ; 
		for ( int i = 0 ; i < n ;  i ++ ) {
			cin >> str[i] ;
			if( str[i].size() % 2 == 1 )
				ganjil++ ; 
			else {
			if ( count(str[i].begin() , str[i].end() , '0') % 2 == 1 )
				genapburuk++ ; 
			}
		}
		if( ganjil == 0 && genapburuk % 2 == 1 )
			cout << n-1 << endl ;
		else
			cout << n << endl ; 
		
	
	}
	
}
