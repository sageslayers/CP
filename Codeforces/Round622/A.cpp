#include <bits/stdc++.h>

using namespace std ;

int main () { 
	int t ;
	
	cin >> t; 
	while ( t -- ) {
	vector <int> a;
	int b  ;  
	for ( int i = 0 ; i < 3 ; i ++ ){  
		cin >> b; 
	a.push_back(b);
}
	sort(a.begin(),a.end(),greater<int>() ); 
	//for ( auto & r : a )
	//	cout << r << endl ; 
	int sum =  0 ; 
	
	if ( a [0]!= 0 ) { 
		a[0]-- ;
		sum ++ ;  
	}
	if ( a[1]!= 0 ) { 
		
		a[1]-- ;
		sum++ ; 
	}
	if ( a[2] != 0 ) {
		a[2]-- ;
		sum++ ;
	}
	if ( a[0]!= 0 && a[1] != 0 ) {
		a[0]-- ; 
		a[1] -- ; 
		sum++ ;
		 
	}
	if ( a[0] != 0 && a[2] != 0 ) 
		{
			a[0]-- ; 
			a[2]-- ; 
			sum++ ; 
	}
	if ( a[1] != 0 && a[2] != 0 ){
		a[1]-- ; 
		a[2]-- ; 
		sum++ ; 
	}
	
	
	if ( a[0] != 0 && a[1]!= 0 && a[2]!= 0 ) {
		a[0]-- ;
		a[1]-- ;
		a[2]-- ;
		sum++ ; 
	}
	cout << sum << endl ; 
	
}
}
