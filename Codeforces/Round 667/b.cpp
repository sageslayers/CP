#include<bits/stdc++.h>

using namespace std ;

int main () {
	int t; 
	cin >> t;
	while ( t-- ) { 
		int a, b, x ,y , n ; 
		int res = 0 ;
		cin >> a >> b >> x >> y >> n ;
		long long int a1 = max(a-n,x);
		res = a-a1 ; 
		res = n - res ;
		long long int b1 = max(b-res,y);
		long long TCA = a1* b1 ; 
		long long b2 = max(b-n,y);
		res = b - b2 ; 
		res = n - res ;
		long long a2 = max(a-res,x);
		long long TCB = a2 * b2 ; 
		//cout << a1 << " " << b1 << " " << a2 << " " << b2 << endl ;
		cout << min(TCA,TCB) << endl ;
	}
	
	
}
