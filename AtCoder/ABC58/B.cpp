#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	
	string a ; 
	string b ; 
	vector <char> str ; 
	
	cin >> a >> b ; 
	for ( int i = 0 ; i < a.size()-1 ; i ++ ) {
	str.push_back(a[i]);
	str.push_back(b[i]) ;  
     }
     str.push_back(a[a.size()-1]);
     if ( a.size() == b.size() ) {
		str.push_back(b[b.size()-1]) ;  
	 }
	for ( auto & s : str ) 
		cout << s ; 
		cout << endl ; 
	
}
