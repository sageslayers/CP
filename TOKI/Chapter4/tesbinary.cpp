#include<bits/stdc++.h>

using namespace std ;



int main () { 
	vector<int> vect (4) ; 
	for ( int i = 0 ; i < 4 ; i ++ ) {
		vect.push_back(0) ; 
	}
	for ( int i = 0 ; i < 3 ; i ++ ) { 
		for ( int j = i+1 ; j < 4 ;j++ ){
			vector<int> dummy = vect ;
			dummy[i] =1 ; 
			dummy[j] =1 ; 
			for ( int i = 0 ; i < 4 ; i ++ ) 
			cout << dummy[i] ;
			cout << endl ; 
		}
		
	}
	
}
