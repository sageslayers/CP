#include <bits/stdc++.h>

using namespace std ;

int main () { 
	
	int  n , k , val ; 
	vector < int > vect ;  
	
	cin >> n >> k ; 
	for ( int i = 0 ; i < n ; i ++ ) { 
			cin >> val ; 
			vect.push_back(val) ; 
		}
		
	sort(vect.begin() , vect.end() ) ;
	if ( k == 0 ){
		if ( vect [0] > 1 )
			cout << "1"<<endl ; 
		else 
			cout << "-1" << endl ;
		return 0 ; }
	if ( k == vect.size() ) {
		cout << vect[k-1] << endl ; 
	}
	else {
		if ( vect[k-1] == vect[k] )
			cout << "-1" << endl ; 
		else 
			cout << vect[k-1] << endl ; 
			
			
	} 
	
}
		
