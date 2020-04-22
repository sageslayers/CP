#include<bits/stdc++.h>


using namespace std ;

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int t ; 
cin >> t;  
while ( t-- )  {
	int n , m ; 
	cin >> n >> m ; 
	int mat[n+1][m+1] ;
	for (int i = 0 ; i < n ;  i ++ ) 
		for( int j = 0 ; j < m ; j ++ )
			mat[i][j] =  0 ; 
			
	mat[n-1][m-1] = 1 ; 
	
	for ( int i = 0 ; i < n ; i ++ ){
		for ( int j = 0 ; j < m ; j ++ ){
			if (mat[i][j] == 0 )
				cout << 'B' ;
			else
				cout << 'W' ; 
			}
			cout << endl ; 
		}
			
	
}



}
