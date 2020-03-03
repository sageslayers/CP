#include <bits/stdc++.h>

using namespace std ;


int main () { 

ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 

int n ; 
cin >> n ; 
while ( n -- )  {
	
	int a, b ; 
	cin >> a ;
	vector<int> arr ; 
	int sum  = 0 ;  
	int sum1 = 0 ; 
	while ( a-- ) {
		cin >> b ;
		arr.push_back(b) ;  
		if ( b % 2 == 1 ) 
			sum = 1 ;
		else
			sum1 = 1 ; 
	}
	if ( sum == 1 && sum1 == 1 ) 
		cout << "YES" <<endl ; 
	else if (sum1 == 0  && arr.size() % 2 == 1 )
		cout << "YES" <<endl ; 
	else 
		cout <<"NO"<<endl ; 
		
} 


	
	
 } 
 
 
