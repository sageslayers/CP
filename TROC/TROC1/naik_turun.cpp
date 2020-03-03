#include <bits/stdc++.h> 

using namespace std ;

main () {
	
	ios_base::sync_with_stdio(false) ; 
	int n  , jenis , q  , x, y ; 
	cin >> n >> q ; 
	long long int arr[2] = { 0 , 0 } ; 
	for ( int i = 0 ;  i < q ; i ++ )  { 
		cin >> jenis >>  x  >> y  ; 
		if ( jenis == 1 && x != n ) 
			arr[0] += y ; 
		
		else if ( jenis == 1 && x == n ) {
				arr[0] += y ; 
				arr[1] +=y ; 
		}
		if ( jenis == 2 && x != n ) {
			arr[1] -= y ; 
		}
		else if ( jenis == 2 && x == n ) {
				arr[0] -= y ; 
				arr[1] -=y ; 
		}
		
	}
	arr[0] = abs(arr[0]) ;  
	arr[1] = abs(arr[1]) ; 
	
	cout << max(arr[0],arr[1]) <<endl ;  
	
	
}
