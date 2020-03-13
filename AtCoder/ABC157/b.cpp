
#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	int matrix[3][3] ; 
	for (int i = 0 ; i < 3 ; i ++ ) 
		for (int j = 0 ;  j < 3 ; j ++ ) 
			cin>> matrix[i][j] ; 
	cin >> t;
	vector<int> vect ;   
	while ( t--  ) {
		int a; 
		cin >> a; 
		vect.push_back(a) ; 
		for ( int i = 0 ; i < vect.size() ; i ++)  {
			for (int j = 0 ; j < 3 ; j ++ ) {
				for (int k = 0 ; k < 3 ; k++ ) {
				  if ( matrix[j][k] == vect[i] )
						matrix[j][k] = 0 ;
				}
			}
			
		}
	
}
		if ( matrix[0][0] == 0 && matrix[1][1] == 0 && matrix[2][2] == 0 ){
			cout << "Yes" << endl ; 
			return 0 ; 
		}
		if ( matrix[0][2] == 0 && matrix[1][1] == 0 && matrix[2][0] == 0 ){
			cout << "Yes" << endl ; 
			return 0 ; 
		}
		for ( int i = 0 ; i < 3 ; i ++ ) {
			int found = 0 ; 
			for ( int j = 0 ; j < 3 ; j ++ ) { 
				if (matrix[i][j] == 0 ) 
					found ++ ; 
			}
			if ( found ==3 ) 
				{ cout << "Yes" << endl ; 
					return 0 ; }
			
		}
		for ( int i = 0 ; i < 3 ; i ++ ) {
			int found = 0 ; 
			for ( int j = 0 ; j < 3 ; j ++ ) { 
				if (matrix[j][i] == 0 ) 
					found ++ ; 
			}
			if ( found ==3 ) 
				{ cout << "Yes" << endl ; 
					return 0 ; }
			
		}
		cout << "No" << endl ;
}
