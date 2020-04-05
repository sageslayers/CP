#include <bits/stdc++.h>

using namespace std;

int comb (long long n ) {
	long long int sum = n * (n-1) / 2  ; 
	return sum ; 
}

int main() { 

ios_base::sync_with_stdio ;
cin.tie(NULL) ; 

int n , m ; 

cin >> n >> m ; 
unsigned long long x = comb(n) ; 
 x += comb(m);
cout << x << endl ; 
}
