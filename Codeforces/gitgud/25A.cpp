#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int n ; 
	cin >> n ; 
	int odd  =0 ;
	int oddidx ;  
	int even = 0 ;
	int evenidx ;  
	int x; 
	for( int i = 0 ; i < n ; i ++ ) {
		cin >> x ; 
		if( x % 2 == 1 ) { 
			odd++ ; 
			oddidx = i + 1 ; 
		}
		else {
			even++ ; 
			evenidx = i +1 ; 
		}
	}
	cout << (even == 1 ? evenidx : oddidx) << endl ; 
	
}

