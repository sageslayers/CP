#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	
	vector <int> vect ; 
	for ( int i = 0 ; i < 3 ; i ++ ) {
		int a ; 
		cin >> a ; 
		vect.push_back(a) ; 
	}
	sort ( vect.begin() , vect.end() ) ; 
	
	if ( vect[0] == 5 && vect[1] == 5 && vect[2] == 7 )
		cout << "YES" << endl ;
	else
		cout << "NO" << endl ; 
	
}
