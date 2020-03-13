#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; 
	string s ;
	int n ; 
	cin >> n >> s ;
	
	char max = 'a'-1 ; 
	int pos = -1 ; 
	  int count = 0 ; 
	
	for ( int i =  0 ; i < s.size() ; i ++ )  {
		for ( int j = 0 ; i < s.size() ; j ++ ) {
			if ( i == 0 ) {
				if( s[i] >= max  && s[i+1] < s[i] ){
					max = s[i] ; 
					pos = i ; 
				}
			}
			else if ( i == s.size()-1 ) {
				if ( s[i] >= max && s[i-1] < s[i] ) {
					max = s[i] ; 
					pos = i ; 
				}
			}
			else {
				if( s[i] >= max && ( s[i-1] < s[i] || s[i+1] < s[i] ) ) {
					max= s[i] ; 
					pos = i ; 
				}
			}
		}
		if ( pos == -1 ) {
			cout << count << endl ; 
			return 0 ;
		}
		else {
			s.erase(pos,pos+1);
			pos = -1 ; 
			max = 'a' -1 ; 
		}
		
	} 
	cout << count << endl ; 
}
