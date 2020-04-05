	#include <bits/stdc++.h>

	using namespace std ;

	int main() { 
		int t ; 
		cin >> t;  
		while (t-- ) {
			int n ; 
			cin >> n  ; 
			string a ; 
			cin >> a ; 
			string b; 
			string c ;
			char higher = 'x' ;   
			for ( int i = 0 ; i < n ; i ++ ) {
				
				if ( higher == 'x'  ) { 
					if( a[i] == '0' ) {
						b.push_back('0');
						c.push_back('0');
					}
					else if ( a[i] == '1' ) {
						b.push_back('1');
						c.push_back('0');
						higher = 'c' ; 
					}
					else {
						b.push_back('1');
						c.push_back('1');
					}
			}
			else {
				if( a[i] == '0' ) {
						b.push_back('0');
						c.push_back('0');
					}
				else if ( a[i] == '1' ) {
						b.push_back('0');
						c.push_back('1');
					}
					else {
						b.push_back('0');
						c.push_back('2');
					}
			}
		
		}
		cout << b << endl << c << endl ; 
}
}
