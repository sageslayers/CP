#include <bits/stdc++.h>

using namespace std ; 


int main () { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; 
	vector<int> vectA ; 
	vector<int> vectB ; 
	int m , s ; 
	cin >> m >> s ;
	if ( s == 0 && m == 1) {
		cout << 0 << " " << 0 << endl ; 
		return 0 ;
	} 
	int sisa = s ;
	int panjang = m ;  
	for ( int i = 0  ; i < m ; i ++ )  { 
		vectA.push_back(0); 
		vectB.push_back(0) ; 
	}
    if(sisa > 0 ){ 
	  vectA[0] ++ ;
	  sisa -- ; 
  }
	else{
		cout << -1 << " " << -1 << endl ;
		return 0 ; 
	}
	for ( int i = vectA.size() - 1 ; i >= 0 ; i -- ) {
		if (sisa == 0 ) 
			break ;
		if ( i != 0 ) {
			int minimum = min(sisa, 9 ) ;
			vectA[i] += minimum ; 
			sisa -= minimum ; 
		}
		else {
			if ( sisa > 8 ) {
				cout << -1 << " " << -1 << endl ; 
				return 0 ; 
			}
			else {
				vectA[i] += sisa ; 
				sisa =0  ; 
			}
		}
				
	}	 
	for ( auto & r : vectA ) 
		cout << r ; 
	cout << " " << endl ; 
	
	sisa = s ;  
		vectB[0]++ ; 
		sisa-- ; 
	for( int i = 0 ; i < vectB.size() ; i++ ) { 
		if ( sisa == 0 ) 
			break ; 
		int minimum = min(sisa, 9 - vectB[i]) ; 
		vectB[i] += minimum ;
		sisa-= minimum ; 
	}
	
	for ( auto & r : vectB)
		cout << r ;
		cout <<endl ; 

	
}
