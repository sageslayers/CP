#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cin >> t ; 
	while ( t--) {
		int a ; 
		cin >> a;
		vector <int> vect ;   
		vector <int> vectb ;   
		while ( a-- ) {
			int b; 
			 cin >> b;  
			 vect.push_back(b) ; 
		}
		
		for ( int i = vect.size()-1  ; i >=0  ; i-- )
			vectb.push_back(vect[i]) ; 
		int found = 0 ; 
		for ( int i = 0 ; i < vect.size() && found == 0 ; i ++ )  { 
				for (int j = 0 ; j < vect.size() && found == 0 ; j++ ) {
					if( vect[i] == vectb[j] && i < vect.size() - 2 && j < vect.size() - 2 ){
						int count = 1 ; 
						for (int k = 1 ; k <= 2 ; k ++ ) {
						//	cout << i << " " << j << " " << vect[i+k] << " " << vect[j+k] << endl ;  
							if ( vect[i+k] == vectb[j+k] )
								count++ ; 
							if ( count == 3 ) {
								cout << "YES"<< endl ; 
								found = 1; 
							}
						}
					}
				}
		}
		if ( found == 0 ) 
		cout <<"NO" <<endl ; 
		
	}
	
}
