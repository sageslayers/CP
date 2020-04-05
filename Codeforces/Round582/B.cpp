#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main() { 

ios_base::sync_with_stdio ;
cin.tie(0) ; 
cout.tie(0);
int t;  
cin >> t; 
while ( t -- ) {
	int n ;
	cin >> n;   
	vector <int> vect(n);
	
	for ( int i = 0 ; i < n ; i ++ ) 
		scanf("%i",&vect[i]);
	int minimum = vect[0] ;
	int count = 0 ;  
	int idx ; 
	int mini = vect[n-1];  
	for ( int i = n-1 ; i >=0 ; i -- ) {
		if( vect[i] > mini )
			count++;
		else
			mini = vect[i] ; 
	}
	printf("%i\n",count);
}
}
