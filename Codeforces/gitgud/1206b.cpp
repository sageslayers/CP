#include<bits/stdc++.h>

using namespace std ;

int main() {

int n ; 
cin >> n ;
vector<int> vect(n) ; 
long long int sum = 0 ;
int neg = 0 ; 
int pos = 0 ;  
bool neu  = false ; 
for ( int i = 0 ; i < n ; i ++ ) { 
	cin >> vect[i] ;
	if ( vect[i] < 0 ) {
		neg-- ; 
		vect[i] *= -1 ; 
	}
	else if (vect[i] == 0 )
		neu = true ; 
	sum+= abs(vect[i]-1);
	
	
}
if( neg % 2  !=0  && !neu ) sum+=2 ; 

cout << sum << endl ;  
}
