#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false) ;
	cin.tie(0); 
	cout.tie(0);
	
	int t ; 
	cin >> t ; 
	while ( t-- ) {
		int n ; 
		cin >> n; 
		int count = 0 ; 
		vector<int> pref (n+1); 
		vector<int> vect (n+1); 
		pref[0] = 0 ; 
		bool arr[8000] = {0} ; 
		for( int i = 1 ; i <= n ; i ++ ) {
			cin >> vect[i] ; 
			pref[i] = vect[i] ; 
		}
		for(int i = 1;  i<= n ; i ++ ) {
			pref[i] = pref[i]+pref[i-1] ;
		}
		for ( int i = 1 ; i <= n ; i ++ ) {
			for ( int j = i+1 ; j <=n ; j ++ ) {
				if( pref[j] - pref[i-1] > 8000 )
					break ; 
				arr[pref[j]-pref[i-1]] = true ; 
			}
		}
		for (int i =1 ; i <= n ; i ++ ) {
			if ( arr[vect[i]]  )
				count++ ; 
		}
	cout << count << endl ; 
	}
	
}
