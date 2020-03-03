#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int n ;  
	int r ; 
	vector <int>  vect ; 
	cin >> n  >> r ; 
	for ( int i = 0 ; i < n ; i ++  ) {
		int a ; 
		cin >> a ; 
		vect.push_back(a) ; 
	}
	sort (vect.begin() , vect.end() ) ; 
	int sum = 1e9; 
	
	for ( int i = 0 ; i <= n-r ; i ++ ) {
		//cout << " $ " << vect[i+2]-vect[i] << endl ; 
		sum = min(sum,vect[i+r-1]-vect[i]);
	}
	cout << sum << endl ; 
	
}

