#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t; 
cin >> t; 
while (t -- ) {
int n ; 
cin >> n ; 
vector <long long> vect(n) ;
for (int i = 0 ; i < n ; i ++ )  {
	cin >> vect[i] ;
}	 
long long pangkat = -1 ;
long long sum = 0 ;  
long long totsum = 0 ;
int bestpangkat = -1  ; 
for( int i = 1 ; i < n ; i ++ )  {
	if ( vect[i] < vect[i-1] )
		diff = max(diff,vect[i-1] - vect[i] );  
	
}
cout << diff << endl ; 
cout << pangkat+1 << endl ; 
}


}
