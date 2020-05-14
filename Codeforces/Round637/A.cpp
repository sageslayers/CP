#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t;  
cin >> t; 
while ( t--) {
	int n , a, b, c, d ; 
	cin >> n >> a >> b >> c >> d ; 
	int left = n* (a-b) ; 
	int right = n*(a+b) ; 
	int left2 = c-d ; 
	int right2 = c+d ; 
	if( left2 >= left && left2 <= right || right2>= left && right2 <= right  ||
		left >= left2 && left <= right2 || right >= left2 && right <= right2 )
	 
		cout << "Yes" << endl ;
	else 
		cout << "No" << endl ; 
	
}



}
