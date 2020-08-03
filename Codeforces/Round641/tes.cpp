#include <bits/stdc++.h>

using namespace std ;

int main () {
	int a= sqrt(10) ;
	cout << a << endl ; 
	exit(0) ;  
	for ( int i =  2 ; i <= 17389 ; i ++ ) { 
		if ( a % i == 0 )
			cout << i << endl ; 
	}
	
	
}
