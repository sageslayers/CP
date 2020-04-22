#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int t ; 
cin >> t;  
while ( t-- ) {
	int n ; 
	cin >> n ; 
	if ( n % 4 != 0 ) {
		cout <<"No" << endl ; 
		continue ; 
	}
	else {
		cout << "Yes" << endl ; 
		int x = 2 ; 
		int y = 1 ; 
		for( int i = 0 ; i < n-1 ; i ++ )  {
			if ( i < n/2 ){ 
				cout << x << " " ;
				x+=2 ; 
			} 
			else{
				cout << y << " " ; 
				y+= 2;  
			}
		}
		cout << y + (n/2) << endl ; 
	}
		
	
	
}


}
