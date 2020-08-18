
#include<bits/stdc++.h>

using namespace std ;

int main () {
	int t; 
	cin >> t; 

	
	while (t-- ) {
			bool flag = false ; 
		int n ; 
		cin >> n ;
		if( n % 2 == 0 )
			flag=  true ; 
		int sum =  n / 2 ; 
		sum+=1 ;
		cout << sum << endl ; 
	}
	
}
