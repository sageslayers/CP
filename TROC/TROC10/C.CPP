#include <bits/stdc++.h> 

using namespace std ;

int triangular (int x )   { 
	return ( x * ( x + 1 ) / 2 )  ;
}

main () {
	int a , b, c, d ,e , f ; 
	
	cin >> a >> b >> c >> d >> e >> f ; 
	
	int sum = 0 ;  
	sum += d-1 ;  
	sum += e ; 
	sum += f - 1 ; 
	
	cout << triangular(sum) - triangular(f-1) - triangular(b-1) - triangular(d-1) << endl ; 
	
	
}

