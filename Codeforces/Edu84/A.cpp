#include<bits/stdc++.h>

using namespace std ;



int main() {
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0) ; 
	vector<long long>vect(1e7+1) ; 
	long long x = 1; 
	for (int i = 1 ; i <= 1e7 ; i ++ ) {
		vect[i] = x   ;
		x+=2;
	}
	for (int i = 1 ; i<= 1e7 ; i ++ ) 
		vect[i]+= vect[i-1] ; 
	int t ; 
	//cout << vect[1403] << endl ; 
	cin >> t ; 
	while (t--) {
		int n , k ; 
		cin >> n >> k ; 
		if ( n%2 + k%2 !=1 && vect[k] <= n )
			cout << "YES" << endl ;
		else
			cout << "NO" << endl ; 
	}
}
