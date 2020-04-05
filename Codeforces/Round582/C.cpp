#include <bits/stdc++.h>

using namespace std;

int main() { 

ios_base::sync_with_stdio ;
cin.tie(NULL) ; 
int t; 
cin >> t;  
while ( t-- ) {
	long long n , m  ; 
	cin >> n >> m ;  
	int a[10] ; 
	n = n / m ; 
	for ( int i = 0 ; i  < 10 ; i ++ ) 
		a[i] = (i+1) * m % 10 ; 
	long long sum   = 0 ; 
	for ( int i = 0 ; i < n%10; i ++ ) 
		sum += a[i] ; 
	int total  = 0 ;  
	for ( int i = 0 ; i < 10 ; i ++  )
		total += a[i] ; 
	cout << n/10 * total + sum << endl ; 
}



}
