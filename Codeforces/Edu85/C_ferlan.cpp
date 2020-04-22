#include<bits/stdc++.h>
using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t ; 
cin >> t; 
while ( t-- ) {
	int n ; 
	cin >> n ; 
	long long int a[n+5]  , b[n+5]  ; 
	for( int i = 0 ; i < n ; i++ ){
		cin >> a[i] >> b[i] ; 
	}
	long long ans =0  ;
	long long minimum = 1000000000000 ; 
	for (int i = 0 ; i < n ; i ++ ) { 
		int idx = (i+1)%n ; 
		long long value = min(a[idx],b[i]); 
		ans += a[idx] - value ; 
		minimum = min(minimum,value); 
	}
	ans+= minimum ; 
	cout << ans << endl ;  
}


}
