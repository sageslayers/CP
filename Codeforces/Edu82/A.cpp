#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	
	//int t ; 
	cin >> t ; 
	while ( t-- )  {
		string s ; 
		cin >> s ;
		int start  = -1 ; 
		int end = -1 ;  
		for ( int i = 0 ; i <  s.size() ; i++ )  {
			if ( s[i] == '1' && start == -1 ) 
				start = i ; 
			else if ( s[i] == '1' && start > -1 )
				end = i ; 
		}
		if ( end == -1 ) 
			cout << 0 << endl ; 
		else { 
			int count = 0 ; 
			for ( int i = start ; i < end ; i ++ ) { 
				if ( s[i] == '0' )
					count++ ; 
			}
			cout << count << endl ; 
			
			
		}
	}

}
