#include<bits/stdc++.h>

using namespace std ;

int main() { 
	int a,b,c,x;
	cin >> a >> b >> c >> x ; 
	int cnt = 1; 
	int x2 = x; 
	x2 = (a*x2 + b ) % c ;
	while ( x2 != x ) {
		cnt++ ; 
		x2 = (a*x2 + b ) % c ;
	}
	cout << cnt << endl ;
}

