#include <bits/stdc++.h>


using namespace std ;


int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a , b ; 
	
	int t ;
	cin >> t;  
	while ( t-- ) { 
		cin >> a >> b ;
		if ( a == b ) 
			cout << 0 << endl ; 
		else if ( b > a ) { 
			if ( ( b - a) % 2 == 1 ) 
				cout << 1 << endl ;
			else
				cout << 2 << endl ; 
		}
		else {
			if (  (a-b) % 2 == 1 )
				cout << 2 << endl ; 
			else
				cout << 1 << endl ; 
			
		}
	}
	
}
