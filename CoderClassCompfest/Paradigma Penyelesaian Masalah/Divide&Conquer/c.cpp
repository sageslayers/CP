#include<bits/stdc++.h>

using namespace std; 
#define MOD 1000000007



long long recursive(int n ) { 
	if( n == 1 )
		return 2 ;
	unsigned long long sum = 0 ; 
	if ( n % 2 == 0 ) {
		sum =  recursive(n/2) ;
		sum %= MOD ;
		sum = sum * sum ;  
	}
	else if ( n % 2 == 1 ) {
		sum =  recursive(n/2) ;
		sum %= MOD ;
		sum = sum * sum * 2;  
	}
	return sum % MOD ; 
}

int main() {
	int n ; 
	cin >> n ;
	unsigned long long ans =  recursive(n) ; 
	cout << ans - 1 << endl ; 
	
	
}
