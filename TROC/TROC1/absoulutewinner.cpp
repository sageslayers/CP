#include<bits/stdc++.h>

using namespace std ; 

int main () {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ; 
	
	int a , b,  c ; 
	
	cin  >> a >> b >> c ; 
	
	int sum  = a + b + c ; 
	sum /= 7 ; 
	if ( a == sum * 4 || b == sum * 4 || c == sum * 4 ) 
		cout << "YA" << endl ; 		
	else 
		cout << "TIDAK" << endl ; 
		
	
}
