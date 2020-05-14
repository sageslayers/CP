#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(0) ; 
cout.tie(0) ;

int a, b , c , d ;
cin >> a >> b >> c >> d; 
int fo = -1 ; 
while ( true ) { 
	c-= b ; 
	if ( c <= 0 ) {
		fo = 1  ; 
		break ; 
	}
	a-= d ;
	if ( a <= 0 ){
		fo = 0 ; 
		break ;
	}
}
if ( fo == 1 ) 
	cout << "Yes" << endl ; 
else
	cout << "No" << endl ; 
}
