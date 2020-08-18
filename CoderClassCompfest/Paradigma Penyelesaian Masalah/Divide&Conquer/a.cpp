#include <bits/stdc++.h>

using namespace std ;
int n , a , b;
long long ans ;
long long binser(long long l , long long r ) {
	if( r >= l ){
	long long mid = (l + r) / 2 ;
	long long kpk = 1ll*a* (b / __gcd(a,b));
	long long res = (mid / a) + (mid / b ) - (mid / kpk ) ;
	bool check = false ;
	if ( mid % a == 0 || mid % b == 0 || mid % kpk == 0 ){
		check = true ; 
	}
	if ( res == n && check ){
		return mid ;
	}
	else if ( res == n && !check ){
		binser(l,mid-1);
	}
	else if ( res > n ) {
		binser(l,mid-1);
	}
	else if( res < n )
		binser(mid+1,r);
	else
		return ans ; 
	}
	
}


int main() {

long long int x = 1e18 ;
 
cin >> n >> a >> b ; 
ans = binser(1,x);

cout << ans  << endl ; 
}
