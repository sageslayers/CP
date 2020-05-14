#include <bits/stdc++.h>

using namespace std ;


int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {
int n , k ; 
cin >> n >> k  ; 
vector<int> vect(n);
set<int> st ;  
for ( int i = 0 ; i < n ; i ++ )  {
	cin >> vect[i] ; 
	st.insert(vect[i]) ; 
}
	if ( st.size() > k )  {
		cout << -1 << endl ; 
		continue ; 
	}
	else {
		map <int,int> mp ;
		for( auto & r : st )
			mp[r]++ ; 
		int count = 0 ; 
		if ( count != k-st.size() ) {
			for ( int i = 1 ; i <= n ; i ++ ) { 
				if ( mp[i] == 0 ) {
					mp[i] = 1;  
					count ++ ; 
				}
				if ( count == k-st.size() )
					break ; 
			}
		}
		cout << k * n << endl ; 
		for ( int i = 0 ; i < n ; i ++ ) {
		for ( auto  &r : mp ) {
			cout << r.first << " " ; 
		}
	}
		cout << endl ; 
	}

}



}
