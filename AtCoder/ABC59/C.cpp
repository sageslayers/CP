#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	
	int n ; 
	int sum = 0 ;
	int total = 0 ;  
	cin >> n ; 
	vector <int> vect ;    
	bool positive = false ; 
	//cout << positive << endl ;  
	while ( n--) {
		int a;  
		cin >> a ; 
		vect.push_back(a);
	}
	
	sum = vect[0] + vect[1] ;
	if ( sum < 0 ) 
		positive = false ; 
	else 
		positive = true ; 
		
	for ( int i = 2 ; i < vect.size() ; i ++ )  {
		sum+= vect[i] ; 
		if ( positive ) {
			if ( sum >= 0 )  { 
				total += abs(sum) + 1  ; 
				sum = -1;  
			}
			positive = false;  
		}
		else if ( !positive ) {
			if ( sum <= 0  )  {
				total += abs(sum) + 1 ; 
				sum = 1 ; 
				
			}
			positive = true ; 
		}
		
	}
	cout << total << endl ; 
	
	
}
