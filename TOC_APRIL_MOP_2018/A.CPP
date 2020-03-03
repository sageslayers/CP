#include <bits/stdc++.h>


using namespace std ;
int root ( int a )  { 
	
	for ( int i = 1  ; i <= a/2 ; i ++ ) {  
		if (i* i == a )
				return i ; 
	}
	return 0 ; 
}
int main () { 
	int a ; 
	cin >> a;
	int b = root(a) ;   
	//cout << b << endl ; 
	if ( a == 1 ) 
		cout << "0 1" << endl ; 
	else if ( b!= 0  )
			cout << b << " " << b << endl ; 
	else { 
		cout << 1 << " " << a-1 << endl ; 
	}
	
}
