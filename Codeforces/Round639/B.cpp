#include <bits/stdc++.h>

using namespace std; 

int main () { 
int t ; 
cin >> t;  
vector <int> vect ; 
int x = 2 ;
int y = 0 ;  
vect.push_back(x+y) ;  
while ( vect.back() < 1000000000 ) {
	x += 2 ; 
	y+= 1 ; 
	vect.push_back(vect.back()  + x + y ) ; 
}

while ( t--  ) { 
	int n ; 
	cin >> n  ; 
	int cnt = 0 ; 
	while ( n >= 2  ){ 
		auto lower = lower_bound(vect.begin(), vect.end() , n ) ;
		if ( n < *lower ) lower-- ; 
		//cout << *lower << endl ; 
		n-= *lower ; 
		cnt++ ;  
	}
	cout << cnt << endl ; 
	
}
}
