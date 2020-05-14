#include <bits/stdc++.h>

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int n , m , k ; 
cin >> n >> m >> k ;
int mat[n][m] ; 
for ( int i = 0  ; i < n ; i ++ )  {
	for ( int j = 0 ; j < m ; j ++ ) {
		mat[i][j] = 1 ; 
	}
}
int mini = 0 ; 

for( int i = 0 ; i < n ; i ++ ) { 
	int count = 0 ; 
	for ( int j = 0 ; j < m ; j ++ ) {
		if ( i != 0 && mat[i-1][j] == 1 )
			count++ ; 
		if (i!= n-1 && mat[i+1][j] == 1 )
			count++ ; 
		if (j!= 0&&  mat[i][j-1] == 1 )
			count++ ; 
		if ( j!= n-1 && mat[i][j+1] == 1 )
			count ++ ; 
		if ( count >= 2 ) 
			mat[i][j] = 0 ; 
		count = 0 ; 
	}
	
}
for ( int i = 0 ; i < n ; i ++ ) 	{
	for ( int j = 0 ; j < m ; j ++ ) { 
		if (mat[i][j] == 1)
			mini++ ; 
	}
}
if ( k < mini ) {
	cout << "TIDAK" << endl ; 
	return 0 ;
}
else {
	if (k > mini ) { 
		k = k-mini ; 
		for (int i = 0 ; i < n ; i ++ ) {
			for ( int j = 0 ; j < m ; j ++ ) { 
				if ( mat[i][j] == 0){
					mat[i][j] = 1; 
					k-- ; 
					if ( k == 0 ){
						i = n ; 
						j = n ; 
						break ; 
					}
				}
			}
		}
	}
}
cout << "YA" << endl ; 
for ( int i = 0 ; i <n ; i ++ ) { 
	for  ( int j = 0 ; j < m ; j ++ ) {
		if ( mat[i][j] == 1 )
			cout << "X" ;
		else
			cout << "." ; 
		}
		cout << endl ; 
	}
}
