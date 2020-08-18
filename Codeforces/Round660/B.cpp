#include<bits/stdc++.h>

using namespace std ;


int main() {
	
	int t ;
	cin >> t ; 
	while(t--) {
		int n ; 
		cin >> n; 
		int eight ;
		if ( n % 4 == 0 ) 
			eight = n / 4;
		else
			eight = n  / 4 + 1 ;
		for(int i = 0 ; i < n-eight ; i ++ ) 
			cout << 9 ;
		for (int i = 0 ; i < eight ; i ++ ) 
			cout << 8 ; 
		cout << endl ; 
		
		
		
	}
	
}
