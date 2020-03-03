#include <bits/stdc++.h>
using namespace std ;


int main () { 

ios_base::sync_with_stdio(false);
cin.tie(NULL) ;

int a , b  , x , y ; 
int t ;

cin >> t  ;

while ( t -- ) {  
	cin >> a >> b >> x >> y;  
	
	 int z = max ( (a - (x + 1))  * b , x  * b ) ; 
	// cout << z << endl ; 
	 z = max ( z , a  * (b-(y+1)) );
	// cout << z << endl ; 
	 z = max ( z, a  * y ) ; 
	 cout << z << endl ; 
	

	
}

} 
