#include <bits/stdc++.h>

using namespace std ;
#define pi 3.1415926535897932384626433832795
int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

long long n , m  ; 
cin >> n >> m ; 
vector<int> vect(m);  
for( int i = 0 ; i < m ; i ++ ) {
	cin >> vect[i] ;
	n-= vect[i] ; 
	if ( n < 0 ) {
		cout << -1 << endl ; 
		return 0 ; 
	} 
} 
cout << n << endl ; 

}
