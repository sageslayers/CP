#include<bits/stdc++.h>

using namespace std ;

int main (){ 
	int t;  
	cin >> t; 
	while (t-- )  {
	 int n , k ; 
	 cin >> n >> k  ; 
	 vector<int> vect (n) ;
	 vector<int> cnt (2*k+1);  
	 for (int i = 0 ; i < n ; i ++ )
		cin >> vect[i] ; 
	 for( int i = 0 ; i < n/2 ; i ++ ) {
		 ++cnt[vect[i]+vect[n-i-1]]; 
	 }
	 
	 vector <int> pref(2*k+2); 
	 for( int i  = 0 ; i < n /2 ; i ++ ) {
		 pref[min(vect[i],vect[n-i-1])+1]++ ; 
		 pref[max(vect[i],vect[n-i-1])+k+1]--;
	 }
	 
	 for( int i = 1 ; i <= k*2+1; i++ )
		pref[i]+= pref[i-1] ; 
	
		
	  int ans = 1e9 ;
	  for (int i = 2;  i <= k*2 ; i ++ ) {
		  ans = min(ans,pref[i] - cnt[i] + ( n/2 - pref[i] )*2 ) ;
	  }
		cout << ans << endl ; 
	}
	
}
