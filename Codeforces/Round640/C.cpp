#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false) ;
	cin.tie(0); 
	cout.tie(0);
	
	int t ; 
	cin >> t ; 
	while ( t-- ) {
		long long n , k ;
		cin >> n >> k ;
		k = k + (k/n); 
		while ( k % n == 0 )
			k++ ; 
		cout << k << endl ; 
		
	}
	
}
