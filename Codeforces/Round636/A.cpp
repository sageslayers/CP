#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t ; 
cin>> t;  
while   ( t-- ) {
	int n ; 
	cin >> n ; 
	int x = 3 ; 
	int y = 0 ; 
	while ( y == 0 ) {
		if( n % x == 0 ){
			y = n  / x ; 
			break ; 
		}
		x += (x+1);
	}
	cout << y << endl ; 
}

}
