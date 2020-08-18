#include<bits/stdc++.h>

using namespace std;

int main () {
	int n ;
	cin >> n ;
	vector<int> vect(n+1);
	vect[0] = INT_MAX;
	for(int i = 1 ; i <= n ; i ++ ) {
		cin >> vect[i] ;
	}
	int l[n+1];
	l[0] = 0 ;
	long long sum = 0 ; 
	for(int i = 1 ; i <= n ; i ++ ) {
		if( vect[i-1] > vect[i] )
			l[i] = i-1 ;
		else if ( vect[i-1] == vect[i] ){
			l[i] = l[i-1] ;
		}
		else {
			int x = l[i-1];
			//cout << i << " " << vect[x] << endl ;
			while ( vect[x] <= vect[i] ) {
				x = l[x];
		//		cout << i << " " << vect[x] << endl ;
			}
			l[i] = x ;
		}
	}
	
	for(int i = 1 ; i <= n ; i ++ ) {
		sum+= i - l[i] ;
	}
	cout << sum << endl ;
	
}
