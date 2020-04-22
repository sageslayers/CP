#include <bits/stdc++.h>

using namespace std ;

int main () { 
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL); 
	cout.tie(NULL) ; 
	int t; 
	cin >> t ; 
	while ( t-- )  {
		int n ; 
		cin >> n ; 
		int x= -1; 
		int y= -1 ; 
		int a, b; 
		int fo = 1; 
		for (int i = 0 ; i  < n ; i ++ )  { 
			cin >> a >> b; 
			if(  a <  x  || b < y || a - b  < x - y )
				fo = 0 ; 
			x = a; 
			y = b; 
		}
		if ( fo == 1 ) 
			cout << "YES" << endl ; 
		else
			cout << "NO" << endl ; 
		
	}
	
	}
