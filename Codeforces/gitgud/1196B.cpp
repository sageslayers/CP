#include<bits/stdc++.h>

using namespace std ;

int main () { 
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ; 
int t ; 
cin >> t;  
while ( t-- ) { 
	int n  ,  k ; 
	cin >> n >> k ; 
	vector < int > vect(n) ; 
	int odd =  0 ; 
		for( int i = 0 ; i < n ; i ++ ) {
			cin >> vect[i] ; 
			if( vect[i] % 2 == 1 )
				odd++ ; 
		}
		//cout << odd << endl ; 
	if( odd < k || (odd%2 != k%2) ) {
		cout << "No" << endl ; 
		continue ; 
	}
	else {
		cout << "Yes" << endl ; 
		int count = 0 ; 
		for( int i = 0 ; i < n ; i ++ ) {
			if( count == k-1 ){
				cout << n << endl;
				break ;
			}
			if( vect[i] % 2 == 1 ) {
				cout << i+1 << " "   ;
				count ++ ;  } 
			
			
		}
			
		
	}
}	
	
}
