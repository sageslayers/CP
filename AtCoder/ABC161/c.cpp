
#include <bits/stdc++.h>

using namespace std ;

int main () {
	long long n , k ; 
	cin >> n >> k ; 
	long long x = n % k ; 
	x = min ( x, abs(x-k) ) ; 
	cout << min(n,x) << endl ; 
	
}
