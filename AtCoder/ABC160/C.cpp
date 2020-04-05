#include <bits/stdc++.h>

using namespace std ;
	
	
int main () {
	ios_base::sync_with_stdio; 
	cin.tie(0) ; 
	cout.tie(0)  ; 
	int k ; 
	int n ; 
	cin  >> k >> n ;
	vector <int> circle(n) ;   
	for ( int i = 0 ; i < n ; i ++ ) 
		cin >> circle[i] ;
	circle.push_back(circle[0] + k ) ; 
	
	int max = 0 ; 
	int idx ;  
	for ( int i = 0 ; i < n ; i ++ ) {
			if ( abs (circle[i] - circle[i+1]) > max ){
				max = abs (circle[i] - circle[i+1] ) ; 
				idx = i+1 ; 
			}
	}
	int sum = 0  ; 
	for( int i = 0 ; i < idx-1 ; i ++ )  {
		sum += abs(circle[i] - circle[i+1] ) ; 
	}
	for ( int i = idx ; i < n ; i ++  ){
		sum+= abs(circle[i] - circle[i+1] ) ; 
	}
	cout << sum << endl ; 
	
}

