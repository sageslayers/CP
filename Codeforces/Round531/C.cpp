#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define mp make_pair
using namespace std ;

int main () { 
	int n ,x, y ; 
	vi::iterator it ; 
	vi::iterator it2 ; 
	cin >> n >> x >> y;  
	int turn = 1000  ;
	vi vect(n) ;
	for( int i = 0 ; i < n ; i ++ ) 
		cin >> vect[i] ; 
	if ( y >= x ) {
	sort(vect.begin(),vect.end());  
		it = upper_bound(vect.begin(),vect.end(), x ) ; 
	if( *it > x )  {
		it-- ; 
	}
	
	int jarak = distance(vect.begin(),it) ; 
	
		cout << (jarak+2) / 2  << endl ; 
	}
	else {
		cout << n << endl ; 
		
	}
}
