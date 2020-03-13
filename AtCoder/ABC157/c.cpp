#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	
	int n , m  ; 
	cin >> n >> m ;
	int arr[n] ; 
	for ( int i = 0 ; i < n ; i ++ ) {
		arr[i] = -1 ; 
	} 
	int s ; 
	int v ; 
	for ( int i = 0 ; i < m ; i ++ ) { 
		cin >> s >> v ; 
		if (arr[s-1] == -1 || arr[s-1] == v )
			arr[s-1] = v ; 
		else {
			if ( arr[s-1] != v ){
				cout << -1 << endl ; 
				return 0 ; 
			}
				
		}
	}
	
	if ( n > 1 && arr[0] == 0 ) {
		cout << -1 << endl ; 
		return 0;  
	}
		if (arr[0] == -1 )
			arr[0] = 1 ; 
		if ( arr[1] == -1 )
			arr[1] = 0 ; 
		if (arr[2] == -1 )
			arr[2] = 0 ; 
		for ( int i = 0 ; i < n ; i ++ ) 
			cout << arr[i] ;
			cout << endl ; 
	}
