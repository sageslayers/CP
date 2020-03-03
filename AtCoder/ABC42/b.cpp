#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	
	vector <string> str ; 
	int n  , l ; 
	string s ; 
	cin >> n >> l ;
	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> s ; 
	str.push_back(s) ; }
	sort(str.begin(), str.end() ) ; 
	
	for ( auto & r : str ) 
		cout << r ;
	cout << endl ; 
	
}
