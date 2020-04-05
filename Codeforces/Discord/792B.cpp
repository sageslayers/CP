#include <bits/stdc++.h>

using namespace std ;

int main () { 
	
	int n , k ;  
	cin >> n >> k ; 
	int arr[n] ;
	int size = n ; 
	int cur = 0 ; 
	for( int i = 0 ; i < n   ; i ++ ) 
		arr[i] = 0  ; 
	while ( k-- ) {
		int x;  
		cin >> x ;
		if(x > n ) {		
			x%= size   ;
			if ( x== 0 )
				x+= size ;
		} 
	//cout << "#" << x << endl ; 
		while ( x>0 ) {
			
			cur++ ; 
			//cout << arr[cur] << "Cur :  " << cur << endl ; 
			if ( cur == n ) 
				cur = 0 ; 
			if( arr[cur] == 0 )
				x-- ; 
			if( x == 0 ) {
				arr[cur] = 1;  
				cout << cur+1 << " " ;
				while(true){ 
				cur = (cur + 1)%n ;
				if(arr[cur] == 0 )
				break ; 
				}
				size -- ; 
			}
			
			
		}
	//	cout << endl ; 
	//	for ( int i = 0 ; i  < n ; i ++ ) 
		//	cout << arr[i] << " " ; 
		//	cout << endl  ; 
		
		
		
	}
	cout << endl ; 
}
