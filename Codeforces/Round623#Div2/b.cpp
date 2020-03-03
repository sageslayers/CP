#include <bits/stdc++.h>
using namespace std ;


int main () { 
	
	int t ;  
	cin >> t ; 
	while ( t-- ) {
		string str ; 
		int a , b , r ; 
		
		cin >> a >> b >> r >> str ; 
		str[str.size()-1] =  0 ; 
		int i ; 
		for (  i = str.size()-1 ; i > 0 && r>= 0 ; i-- ) {
			if ( str[i] != str[i-1] ) {
					r-=  str[i-1] == 'A' ? a : b ; 
			}
			
		} 
		if ( r < 0 )
			cout << i + 2 << endl ; 
		else 
			cout << i + 1 << endl ; 
		
	
}

}
