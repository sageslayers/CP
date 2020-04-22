#include<bits/stdc++.h>
#define vi vector<int>
#define mp make_pair
#define pb push_back

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int n ; 
cin >> n ; 
vi vect(n) ; 
for( int i = 0 ; i < n ; i ++ ) 
	cin >> vect[i] ;  

long long sum = vect[0] ; 
int len = 1 ;  
double best = sum ; 
int bestlen = 1 ; 
for( int i = 1 ; i < n ; i ++ )  {
	// cout << sum << len << endl ; 
	// cout << sum << " " << vect[i] << " " << len+1 << endl ; 
	// cout << (sum + vect[i]) / (len+1) << endl ;  
	 if ( ((sum*len) + vect[i]) / (len +1 ) >= vect[i] / 1 ) {
		 
		 sum = ((sum*len) + vect[i]) / (len+1) ;
		 len++ ;  
	 }
	 else { 
		 sum = vect[i] ; 
		 len = 1;  
	 }
	 if ( sum > best ){
		 bestlen = len ; 
		 best = sum ; 
	 }
	 if ( best == sum ) 
		bestlen = max(len,bestlen) ; 
	// cout << sum << len << endl << endl ; 
}
cout << bestlen << endl ; 

}
