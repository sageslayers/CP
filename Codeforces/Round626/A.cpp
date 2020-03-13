#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cin >> t ;  
	while ( t-- )  {
		vector < int > vect ; 
			int n,a ; 
			cin >> n ;
	for ( int i = 0 ; i < n ; i ++ ) { 
		cin >>a ;
		vect.push_back(a) ; 
	}
	int ganjil = 0 ; 
	int genap = 0 ;
	vector<int> posganjil  ;  
	vector<int> posgenap  ;  
	for ( int i = 0 ; i < vect.size() ; i ++ ) {
		if ( vect[i] % 2 == 1 ) {
			ganjil++ ; 
			posganjil.push_back(i+1);
		}
		if ( vect[i] % 2 == 0 ) {
			genap++ ; 
			posgenap.push_back(i+1);
		}
		 
	}
	if( ganjil > 1 ) {
		cout << 2 << endl ;
		cout << posganjil[0] << " " << posganjil[1] << endl;
	}
	else if ( genap > 0 ) {
		cout << 1 << endl ; 
		cout << posgenap[0] << " " << endl ; 
	}
	else {
		cout << -1 << endl;
	}
	
		
	}
	
}
