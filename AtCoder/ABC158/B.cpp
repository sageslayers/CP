#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	long long n , a , b ; 
	cin >> n >> a >> b; 
	if ( n <= a ){
		cout << n << endl ;
		return 0 ;
	}
	if ( n <= a + b)
		{
			cout << a << endl ; 
			return 0 ;
		}
		
	 long long sum  = 0 ; 
	 long long div = n / (a+b ); 
	sum += a * div ; 
	n = n - (a+b)*div;
	if ( n <= a ) {
		sum+= n ;
		cout << sum << endl ;
		return  0 ;  
	}
	else if ( n > a ) {
		sum += a ; 
	}
	
	cout << sum << endl ;
	
}

