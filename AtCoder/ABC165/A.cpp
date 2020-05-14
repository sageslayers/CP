#include <bits/stdc++.h>

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int k ; 
int a, b ; 
cin >> k ; 
cin >> a >> b ; 
int fo = 0 ; 
for ( int i = a ; i <=b ; i ++ ) { 
	if ( i % k == 0 ) {
		cout << "OK"<< endl; 
		return  0 ; 
	}
}
cout << "NG" << endl ;
}

