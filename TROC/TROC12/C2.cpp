#include <bits/stdc++.h>

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int n , m , k ; 
cin >> n >> m >> k ;
int mat[n][m] ; 
for ( int i = 0 ; i < n ; i ++ ) 
	for ( int j = 0 ; j < m ; j ++ ) 
		mat[i][j] = 0 ;
		
int mini = 0 ; 
int maks = min(n,m) ; 
maks = maks + (abs(n-m)+1) / 2 ; 
if(  k < maks )
	cout << "TIDAK" << endl ; 
else {
	if ( n == m  ) {
		for ( int i = 0 ; i < n ; i ++ ) 
			mat[i][i] = 1; 
		}
	if ( m > n ) { 
		for ( int i = 0 ; i < n ; i ++ ) 
			mat[i][i] = 1;  
		if ( abs(m-n)% 2 == 0 ){
		for ( int i = n+1 ; i < m ; i +=2 ) {
			mat[0][i] = 1 ; 
		} }
		else{
			for ( int i = n ; i < m ; i +=2 ) {
			mat[0][i] = 1 ; 
		}
		}
	}
	if ( n > m ) {
		for ( int i = 0 ; i < m ; i ++ ) {
			mat[i][i] = 1 ; }
		if ( abs (n-m)% 2 == 0 ){
		for ( int i = m+1 ; i < n ; i +=2 ) 
			mat[i][0] = 1; 
		}
	
	else {
		for ( int i = m ; i < n ; i +=2 ) 
			mat[i][0] = 1; 
	}
}
int xx = 0 ; 
for ( int i = 0 ; i < n ; i ++ ) 
	for ( int j = 0 ; j < m ; j ++ )
		if (mat[i][j] == 1 )
			xx++ ; 
xx = abs(xx-k);
if ( xx != 0 ) {
for ( int i = 0 ; i < n ; i ++ ) {
	for ( int j = 0 ; j < m ; j ++ ) {
		if ( mat[i][j] == 0 ){
			mat[i][j] = 1 ; 
			xx-- ; 
			if ( xx == 0 ) {
				i = n ; 
				j = m ; 
				break ; 
			}
		}
	}
}
}
		cout <<"YA"<<endl; 
	for ( int i = 0 ; i < n ; i ++ ){ 
		for (int j = 0 ; j < m ; j ++ ){
			if (mat[i][j] == 1 )
				cout <<"X";
			else
				cout <<"." ;
			}
			cout << endl ; 
		}
			
}


}
