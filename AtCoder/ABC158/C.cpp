#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	int a , b ; 
	cin >> a  >> b;  
	for ( int i = 0 ; i <  2000  ; i ++ ) {
		if  ( floor(i * 0.08) == a && floor(i * 0.1) == b ) {
			
			cout << i << endl ;
			return 0 ; }
	}
	cout << -1 << endl ; 
}

