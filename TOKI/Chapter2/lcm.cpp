#include<bits/stdc++.h>

using namespace std ;
int main () 
{ 
	int t; 
	cin >> t; 
	long long int angka[t] ; 
	long long int lcm = 1;
	for ( int i = 0 ; i < t ; i ++ ) 
		cin>> angka[i] ;
	for ( int i = 0 ; i < t ; i ++ )
		lcm = lcm * ( angka[i] / __gcd(lcm,angka[i]));
	cout << lcm << endl ;
	
}
