#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cin >> t;  
	while (t-- ) { 
		int a;
		int b;    
		vector <int> vect ;
		cin >> a;   
		while ( a-- ) {
			cin >> b ; 
			vect.push_back(b) ; 
		}
		int init = vect[0] ;
		int count = 1 ;  
		for ( int i = 1 ; i < vect.size() ; i ++ )  {
			if( vect[i] == init) 
				count++ ; 
		}
		if ( count == vect.size() )
			cout << "YES" << endl ; 
		else {
			int ganjil = 0 ; 
			int genap = 0 ; 
			for (int i = 0 ; i < vect.size() ; i ++ )  { 
				if ( vect[i] % 2 == 1 ) {
					ganjil++ ; 
				}
				else
					genap++ ; 
			}
			if ( ganjil > 0 && genap >0 )
				cout << "NO" << endl ; 
			else if ( ganjil >0 && genap
			 == 0 ) 
				cout << "YES"<< endl ; 
			else if ( ganjil == 0 & genap > 0 ) 
				cout << "YES"<< endl ; 
			else
				cout << "NO" << endl ; 
		}
	}
	
}
