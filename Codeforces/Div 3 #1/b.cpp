#include <bits/stdc++.h>
using namespace std ;


int main () { 

map <string , int > mp ; 
string a , b ; 
int n ;
int current = 0 ; 
cin  >> n >> a ;
for ( int i = 0 ; i < n -1  ; i ++ ) {
	mp[a.substr(i,2)]++ ; 
	if ( mp[a.substr(i,2)] > current ) { 
		b = a.substr(i,2) ; 
		current = mp[a.substr(i,2)] ; 
	}
}
cout << b << endl ; 

}
