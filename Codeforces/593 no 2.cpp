#include <bits/stdc++.h>
#define MOD % 1000000009
using namespace std;

int factorial(int n) {
		long long int i ,j = 1 ; 
	if ( n == 0 ) {
		return j ;
	}

	for ( i = 1 ; i <= n ; i ++) {
		j = j * i ;
	}
	return j ;
}

int main() {
	

	
	long long int a ,i , j ;
	long long int b,c,d;
	long long int print = 0 ;
	
	scanf("%lld %lld",&a,&b);
	
if (a == 1 ) {
	for ( i = 1 ; i <= b ; i ++ ) {
			print = print + factorial(b) / ( factorial(b-i) * factorial (i) )	;
	}
}

else {
	print = a* b * 2 + 1 ;
}
	printf("%lld",print);
	
}

