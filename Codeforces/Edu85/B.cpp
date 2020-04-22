#include <bits/stdc++.h>

using namespace std ;

int main () { 
int t ; 
cin >> t; 
while ( t--  ) {
	int n , k ; 
	long long sum = 0 ; 
	int count = 0 ; 
	cin >> n >> k;   
	vector<int> vect(n) ; 
	for ( int i = 0 ; i  < n ; i ++ ) 
		cin >> vect[i] ; 
	sort(vect.begin() , vect.end() , greater<int> () ) ; 
	//for ( auto & r : vect) 
		//cout << r << " "  ; 
	for (int i = 1 ; i <= n ; i ++ ) { 
		sum+= vect[i-1] ; 
		//cout << sum << endl ; 
		if ( sum / i  >= k ) 
			count++ ; 
		else
			break ; 
	}
	cout << count << endl ; 
	
	
	
}	
	
	
}
