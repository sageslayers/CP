#include <bits/stdc++.h> 

using namespace std ;

main () {
	int n  , v ; 
	double r; 
	cin >> n >> r >> v ; 
	int w[n] ; 
	
	for ( int i = 0 ; i < n ;  i ++  ) {
	 cin >> w[i] ; 
	 if (w[i] == v ) {
		 cout << "-1" << endl ; 
		 return 0 ; 
	 }
	 
 }
	int kec = 10001 ;  
	int pake ; 
	for ( int i = 0 ; i < n ; i ++ ){ 
		if ( abs(v-w[i]) < kec ) {
			kec = abs(v-w[i]); 
			pake = w[i] ;
		}
	}
	cout << fixed << setprecision(9)<<  r/kec << endl ; 
	
}
