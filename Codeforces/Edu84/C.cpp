#include<bits/stdc++.h>

using namespace std ;

int main() {
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0) ; 
		int n ,m , k ;
		cin >> n >> m >> k ;  
		for ( int i = 0 ; i < 2*k ; i ++ ){
			int x,  y; 
			cin >> x >> y; 
		}
		cout << 2*(n-1) + 2*(m-1) + (m-1) *(n-1)  << endl ; 
		for (int i = 0 ; i < n-1  ; i ++)
			cout << "U" ;
		for (int i = 0 ; i < m-1 ; i ++ )
			cout << "L" ; 
		for (int i = 0 ; i < n ; i ++ ) {
			for (int j = 0 ; j < m-1 ; j ++ ) { 
				if ( i % 2 == 0 )
					cout <<"R" ; 
				else
					cout <<"L" ; 
				}
				if ( i != n-1 )
					cout << "D" ; 
					
			

				
			
		}
		
	
	
	}
