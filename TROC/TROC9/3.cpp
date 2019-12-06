#include <bits/stdc++.h> 
#define MOD 1000000007
using namespace std; 
  


int main() 
{
	int n ; 
	int k ; 
	
    long long int sum = 0 ; 
	scanf("%i %i",&n,&k) ;
	
	 long long int  a[n+1] ; 
	 long long int  b[k];
	
	for ( int i = 0 ; i < n ; i ++ ) {
		scanf("%lld",&a[i]);
	}
		if ( k == 1 ) {
		printf("0\n");
		return 0 ;
	}

	sort (a,a+n);
	int max = n-1 ; 
	int min = 0 ; 
	for ( int i = 0 ; i < k ;  ++i ) {
		for ( int j = i ; j < floor(k /2) ; j++ ) {
			sum = sum + abs(a[i] - a[j] );
		}
		for ( int j = n-ceil(k/2)-1 ; j < n ; j ++ ) {
			printf(">>%i <<\n",j);
			sum = sum + abs(a[i] - a[j] );
		}
}
	printf("%lld\n",sum);
}
