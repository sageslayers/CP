#include<bits/stdc++.h>

using namespace std; 
unsigned long long memo[51] ; 

unsigned long long handshake(int n ) {
	if( n % 2 == 1 )
		return 0 ;
	else if ( n == 0 )
		return 1 ; 
	unsigned long long res = 0 ;
	if( memo[n] != 0 )
		return memo[n] ;
	for (int i = 2 ; i <= n ; i += 2  ) {
		res+= handshake(i-2) * handshake(n-i);
	}
	memo[n] = res ; 
	return res ;
}

int main() {
	memset(memo,0,sizeof(memo));
	int n ;
	cin >> n; 
	unsigned long long x = handshake(n) ;
	cout << x << endl ; 
	//for(int i = 2 ; i <= n ; i +=2 )
		//cout << memo[i] << endl ;
	
}
