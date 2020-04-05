
#include <bits/stdc++.h>

using namespace std ;

int main () {
	
	int n  , m ; 
	cin >> n  >> m ; 
	vector<int> vect(n) ; 
	float sum = 0 ; 
	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> vect[i] ; 
		sum+= vect[i] ; 
	}
	sum = sum / (4*m); 
	int count = 0 ; 
	for (int i = 0 ; i < n ; i ++ ) {
		if ( vect[i] >= sum ) {
				count++ ; 
		}
	}
	//cout << count << endl ; 
	if ( count >= m ) 
		cout << "Yes" << endl ;
	else
		cout << "No" <<endl ; 

}
