#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	 
	int n ; 
	cin >> n;  
	vector < int > vect ;
	for ( int i = 0 ; i < n ; i ++ ){
		int x; 
		cin >> x; 
		vect.push_back(x); 
	}
	sort(vect.begin(), vect.end() );
	int max = 1e9;
	int sum ;
	for ( int i = vect[0] ; i <= vect[n-1] ; i ++) {
		sum = 0 ; 
		for ( int j = 0 ; j < n ; j ++ ) { 
			sum+= abs(i-vect[j])*abs(i-vect[j]);
		}
	
		max = sum < max ? sum : max ;  
	}
	cout << max << endl ; 
}
