#include <bits/stdc++.h>

using namespace std ;

long long threePow(int n){
	if ( n == 1 )
		return 3 ;
	if ( n == 0 )
		return 1 ;
	long long val = 0 ;
	if ( n % 2 == 0 ) { 
		val = threePow(n/2) ; 
		val *= val  ; 
	}else if ( n % 2 == 1 ){
		val = threePow(n/2);
		val = val * val  * 3  ; 
	}
	
	return val% 1000000007 ; 
}
long long twoPow(int n ) {
	if ( n == 1 )
		return 2 ; 
	if ( n == 0 )
		return 1 ; 
	long long val = 0 ;
	if ( n % 2 == 0 ) { 
		val = twoPow(n/2) ; 
		val *= val ;
	}else if ( n % 2 == 1 ){
		val = twoPow(n/2);
		val = val * val * 2 ;
	}	
		
	return val% 1000000007 ; 
}

int main () { 
	string s; 
	getline(cin,s);
	int n = s.size() ; 
	s.push_back(' ');
	int eu = 0 ;
	int e = 0 ; 
	
	for(int i = 0 ; i < n ; i ++) {
		if ( s[i] == 'e' && s[i+1] == 'u' ){
			eu++;
			i++;
		}
		else if ( s[i] == 'e' ){
			e++;
		}
	}
	
	long long two = twoPow(e);
	long long three = threePow(eu);
	cout << two * three % 1000000007 << endl ;
}
