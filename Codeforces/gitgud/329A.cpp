#include<bits/stdc++.h>

using namespace std ;




int main () { 
int n ; 
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;


cin >> n ; 
char mat[n+1][n+1] ;
for(int i = 0 ; i < n ; i ++ ) 
	for(int j= 0 ;  j<n ; j ++ ) 
		cin >> mat[i][j] ; 
for( int i = 0  ; i < n ; i ++ )  { 
	for(int j = 0 ; j < n ; j ++ ) {  
		if( mat[i][j] == '.' ) {
			cout << i+1 << " " <<j+1 << endl ; 
				for (int x = i ; x < n ; x ++ ) 
					mat[x][j] = 's' ; 
				for (int x = i ; x >= 0 ; x-- )
					mat[x][j] = 's' ; 
				for (int x = j ; x < n ; x++ ) 
					mat[i][x] = 's' ; 
				for (int x = j ; x>= 0 ; x-- )
					mat[i][x] = 's' ; 
		}
	}
}
for( int  i = 0 ; i < n ; i ++ ){
	for ( int j = 0 ; j < n ; j ++ ) {
		cout << mat[i][j] << " " ;}
		cout << endl ; 
	}
		


}
