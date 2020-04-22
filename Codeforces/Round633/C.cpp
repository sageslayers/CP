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
vector <int> vect(n) ;
for (int i = 0 ; i < n ; i ++ )  {
	cin >> vect[i] ;
}	 

long long sum = 0 ;  
int pangkat = -1 ;
int left = -1 ;   
int dif = -99999999 ; 
int right = 2000000 ; 
for( int i = 0 ; i < n ; i ++ )  {
	left = vect[i] ; 
	for( int j = i+1 ;  j < n ; j ++ )  {
		dif = max( dif, left - vect[j] ) ; 
		//cout << left << " " << vect[j] << " " << dif << endl ;  
		if ( vect[j] > left ) {
			left = vect[j] ; 
			i = j -1 ; 
			break ; 
		}	
		
	}
}
	while ( sum < dif ) {
		pangkat++ ; 
		sum+= pow(2,pangkat) ; 
	}
	cout << pangkat+1 << endl ;  
}

}
