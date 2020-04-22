#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
 
int t; 
cin >> t; 
 
while ( t-- ) {
	int n =  9 ;
	vector<string> vect ;  
	for (int i = 0 ; i < n ; i ++ ) {
		string s; 
		cin >> s; 
		vect.push_back(s); 
	}
	for ( auto & r : vect ) {
		for (int i = 0 ; i < n ; i ++ ) {
			if (r[i] == '5' )
				r[i] = '4' ; }
			}
	
	for (int i =0  ; i< n ; i ++ ) 
		cout << vect[i] << endl ; 
 
}
}
