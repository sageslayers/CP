#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int t; 
	cin >> t ;
	while ( t-- ) { 
		int a, b ; 
		cin >> a >> b ; 
		if ( b > a ) { 
			swap(a,b) ; 
		}
		int cnt = (a-b)/ 10 ;
		if ( (a-b)%10 != 0 )
			cnt++;
			cout << cnt << endl;
	}
	
	
}
