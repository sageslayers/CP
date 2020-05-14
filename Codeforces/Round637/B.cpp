#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t;  
cin >> t; 
while ( t--) {
int n , k ; 
cin >> n >> k ; 
vector<int> p(n)  ; 
vector<int> pref(n+1,0)   ; 
for ( int i = 0 ; i < n ; i ++ )
	cin >> p[i]  ; 
for (int i = 1 ; i < n-1 ; i ++  ) {
	if ( p[i] > p[i-1] && p[i] > p[i+1] ) {
			pref[max(0,i-(k-2))]++ ; 
			pref[i]-- ;
		//cout << "#" << i+1 << " " ;
		//for ( auto & r : pref ) 
		//cout <<r << " " ;
		//cout << endl ; 

	}
}
for( int i = 1 ; i < n ; i ++ )
	pref[i]+= pref[i-1];
//for ( auto & r : pref ) 
	//	cout <<r << " " ;
	//	cout << endl ; 
int l = 1 ; 
int best = 0 ; 
	for ( int i = 0 ; i < n ; i ++ ) {
		if ( pref[i] > best ) {
			best = pref[i] ; 
			l = i+1 ; }
			
	}
	cout << best+1 << " " << l << endl ; 
}



}
