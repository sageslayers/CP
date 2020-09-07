#include<bits/stdc++.h>

using namespace std ;

int main () { 
	
	int t ; 
	
	cin >> t ; 
	while ( t-- ) { 
		bool check = true ; 
		map <char,int > mp ; 
		int n ; 
		cin >> n ; 
		for(int i = 0 ; i < n ; i ++ ) {  
			string s ;
			cin >> s ;
			for(int i = 0 ; i < s.size() ; i ++ ) { 
				mp[s[i]]++;
			}
		}
		for( auto & r  : mp ) { 
			if (r.second % n != 0 ){
				check = false ;
				break ; 
			}
		}
		if ( !check ) { 
			cout << "NO" << endl ;
		}
		else 
			cout << "YES" << endl ;
	}
}
