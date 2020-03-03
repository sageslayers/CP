#include <bits/stdc++.h>

using namespace std ; 


int main () { 
	
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	string s ; 
	int max  = -1 ; 
	string maxi ; 
	getline(cin,s)   ; 
	int count = 0 ; 
	int j ; 
	int permfound = 0 ; 
	int found3 = 0 ; 
	int foundval = 0 ; 
	
		for ( int i = 0 ; i < s.size() ; i ++ ) {
			  
			if(s[i] != '.'  && s[i] != ' ' ) { 
				count++ ;
				if ( s[i] >= 'a' && s[i] <= 'z'   ) 
					found3++ ; 
				if ( s[i] >= '0' && s[i] <= '9' )  
					foundval ++ ;
				  
			}
			else {
	
				if ( count > max && found3 >= 3 &&  foundval >= 1   ) {
					max = count ;  
					j = i ;
					permfound = 1 ; 
					
				}
				count = 0 ;
				found3 = 0 ; 
				foundval = 0  ;   
			}
	}
	 
if ( permfound == 1 ) {
	for ( int i = j-max ; i < j ; i ++ ) {
		cout << s[i]   ;
	  }
	  cout << endl  << max << endl ; 
}

else { 
	cout << "NO" << endl ; 
}
}
