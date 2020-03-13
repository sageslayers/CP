#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cin >> t;  
	while ( t-- ) {
		string s;  
		cin >> s;
		vector <int> vect ; 
		int jarak = 0 ;  
		for ( int i = 0 ; i < s.size(); i ++ ) {
			if( s[i] == 'R' )
				vect.push_back(i);
		}
		if ( vect.size() == 1 ) { 
			int x =  s.size() - vect[0] ;
			int y = vect[0]+1 ; 
			cout << max(x,y) << endl ; 
		}
		else if ( vect.size() == 0 ) {
			cout << s.size() + 1 << endl ; 
		}
		else {
			int x = 0 ; 
			for ( int i = 0 ; i < vect.size()-1 ; i ++ ) {
				x = max(x,vect[i+1] - vect[i]);
				x = max(x,vect[0]+1);
			}
			int y= s.size() - vect[vect.size()-1] ;
			//cout << x << " " << y << endl ; 
			jarak = max(x,y);
			cout << jarak << endl ; 
		}
		
	}
	
}
