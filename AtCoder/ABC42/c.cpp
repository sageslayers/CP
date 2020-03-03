#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	bool dis[10] ; 
	for ( int i = 0 ; i < 10 ; i ++ ) 
		dis[i] = false ; 
		
	int pay , k , a ; 
	
	cin >> pay >> k ; 
	for ( int i = 0 ; i < k ; i ++ ) {
		cin >> a ; 
		dis[a] = true ; 
	}
	while (true) { 
		int sol = pay ;
		bool check = true ; 
		while(sol) {
			if ( dis[sol%10] ) {
				check = false ; 
				break ; 
				}
			sol /= 10 ; 		
		}
		if (check){
			cout << pay << endl ;
			return 0 ; 
		} 
		pay ++ ;
		
	}
	
	
	
}
