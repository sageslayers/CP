#include<bits/stdc++.h>



using namespace std ;


int main () 
{ 
		int t; 
		scanf("%i",&t);
		long long int angka[t] ; 
		long long int lcm ; 
		
		for ( int i = 0 ; i < t ; i ++ ) {
			scanf("%lld",&angka[i]);
		}
		lcm = angka[0] * (angka[1] / __gcd(angka[0],angka[1])) ;
		

		
		for ( int i = 2 ; i < t ; i ++ ) {
			lcm = lcm * ( angka[i] / __gcd(lcm,angka[i]));
		}
		printf("%lld\n",lcm);
		
}
