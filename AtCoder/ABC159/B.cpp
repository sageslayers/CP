#include <bits/stdc++.h>

using namespace std ;
bool checkPal (string s ) {
	for(  int i = 0  , j = s.size()-1 ; i < j ; i++ , j-- ) {
//cout << i << " " << j << endl ; 
//cout << s[i] << " " << s[j] << endl ; 
		if( s[i] != s[j] )
			return false ; 
	}
	return true ; 
}
int main () {
	ios_base::sync_with_stdio; 
	cin.tie(0) ; 
	cout.tie(0)  ; 
	
	string s ; 
	cin >> s;  
	string a , b ; 
	for ( int i = 0 ;  i < (s.size()-1)/ 2 ; i ++ ) {
		a.push_back(s[i]);  
	}
	for ( int i = (s.size()+3)/2-1 ; i < s.size() ; i ++ ) 
		b.push_back(s[i]) ; 
//	cout << a << endl <<  b << endl ; 
	if (checkPal(a) && checkPal(b) && checkPal(s) )
		cout << "Yes" << endl ; 
	else
		cout << "No" << endl ; 
	
	
}
