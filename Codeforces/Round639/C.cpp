#include <bits/stdc++.h>

using namespace std; 

int main () { 
	int t ; 
	cin >> t;  
	while ( t-- ) { 
		int n ; 
		cin >> n ; 
		set <int> s ; 
		for (int i = 0 , x ; i < n ; i ++ ) { 
			cin >> x ; 
			s.insert( ((x +i)% n + n ) % n );  
		}
		 
		if ( s.size() == n ) 
			cout << "YES" << endl ; 
		else 
			cout << "NO" << endl ; 
	}
	
}
