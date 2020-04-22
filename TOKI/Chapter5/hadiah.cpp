#include<bits/stdc++.h>

using namespace std ;

int main () {
	
	long long a , b , c , n ; 
	cin >> a >> b >> c >> n ; 
	a %= (n+1) ; 
	b %= (n+1) ; 
	c %= (n+1) ; 
	for ( int i = 0 ; i < c ; i ++ ) 
		b *= b; 
	b%= (n+1) ; 
	for (int i = 0 ; i < b ; i ++ )
		a *=a ; 
	a%= (n+1);
		cout << a << endl ; 
	
	
}
