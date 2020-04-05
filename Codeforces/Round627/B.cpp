#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cin >> t ; 
	while ( t--) {
		int n ;
		map <int,int> mp ;  
		cin >> n ;
		vector <int> vect(n+1) ;
		int found = 0  ;
		for ( int i = 1 ; i  < n + 1 ; i ++ ){ 
			cin >> vect[i] ;  
		}
		for(int i = 1 ; i < n+1 ; i ++  ){
			if(mp[vect[i]] == 0 ) { 
				mp[vect[i]] = i ; 
			}
			else {
				if ( i >  mp[vect[i]] + 1 ){ 
					cout << "YES" << endl ; 
					found = 1 ; 
					break  ;  
				 }
			}
		}
		if ( found == 0 ) 
			cout << "NO" << endl ; 
	}
	
}
