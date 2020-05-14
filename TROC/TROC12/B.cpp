#include <bits/stdc++.h>

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int n ; 
cin >> n ; 
vector<int> vect(n+1) ; 
long long sum = 0 ; 
for ( int i = 0 ; i <= n ; i ++ ) {
	cin >> vect[i] ; 
}
long long pangkat = pow(2,n); 
for ( int i = 0 ; i <= n ; i ++ ) { 
	sum = sum + 1ll * vect[i] * pow(2,i) ;
}
if (  sum % pangkat != 0 )
	cout << -1 << endl ; 
else
	cout << sum / pangkat << endl ; 

}
