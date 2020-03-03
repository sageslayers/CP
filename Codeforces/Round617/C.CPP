#include <bits/stdc++.h>

using namespace std ;



int main () { 
	string s ; 
	int n , t; 
	cin >> t; 
	
	while ( t-- ) {
	cin >> n >> s ; 
	 
	map <pair<int,int>,int> visit ; 
	pair <int,int> current = { 0,0 } ; 
	visit[current] = 0 ; 
	int l = -1 ; 
	int r = n  ; 

	for ( int i = 0   ; i < n  ; i ++ ) { 
		if ( s[i] == 'L' ) --current.first ; 
		if ( s[i] == 'R' ) ++current.first ; 
		if ( s[i] == 'U' ) ++current.second  ; 
		if ( s[i] == 'D' ) --current.second ; 
		
		if ( visit.count(current)) { 
			if ( i - visit[current] +1  < r - l + 1 ) { 
				l = visit[current] ; 
				r = i ; 
			}
		}
		visit[current] = i + 1 ;
	}
	if ( l == -1 )  {
		cout << "-1" << endl ;
	}
	else {  
	cout << l+1 <<" " << r+1 << endl ; 
	}
	
}
	return 0 ;
}
	
