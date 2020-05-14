#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false) ;
	cin.tie(0); 
	cout.tie(0);
	
	int t ; 
	cin >> t;  
	while ( t-- ) { 
		vector<int> vect ; 
		int n ; 
		cin >> n ;
		int pembagi = 10000 ; 
		while ( true ) { 
			if( n % pembagi == n )
				pembagi /= 10 ; 
			else
				break ; 
		}
		int x = n ;
		int y= 1 ;  
		while ( x > 9 ) {
			x/= 10 ; 
			y*= 10 ; 
		}
		vect.push_back(n/y*y);
		int mulai = 10 ; 
		while ( n % mulai != n ) {
			
			if ( n % mulai != 0 ){
				vect.push_back(n%mulai);
				n-= n%mulai ; 
			}
			mulai*=10 ;  
		}
		
		cout << vect.size() << endl; 
		for ( auto & r : vect )
			cout << r << " " ;
			cout << endl ; 
	}
	
}

