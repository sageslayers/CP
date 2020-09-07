#include<bits/stdc++.h>

using namespace std ;

int main () { 
	long long n , m ;
	cin >> n >> m ; 
	if ( (n / 5 > m) || ((n / 5 == m) && (n % 5 > 0)) || n<m  ){
		cout << -1 << " " << -1 << endl ; 
	}
	else {
		long long min = n/m; 
		long long minans = 0 ; 
		long long res = n % m ;
		if ( min == 4 ) {
			minans = res ; 
		}
		else if ( min == 5 ) {
			minans = m ; 
		}
		long long max = (n-m) / 4 ; 
		cout << minans << " " << max << endl ; 
	}
	
}
