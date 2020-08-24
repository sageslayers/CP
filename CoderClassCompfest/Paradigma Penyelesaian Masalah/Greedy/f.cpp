#include<bits/stdc++.h>

using namespace std ;

int main() {
	int n ; 
	cin >> n ; 
	int maxx = 0 ; 
	long long  sum = 0 ;  
	for(int i = 0 ; i  < n ; i ++ ) {
		int x; 
		cin >> x ;
		maxx = max(maxx,x);
		sum+= x;  
	}
	if ( maxx  >= (sum - maxx) ) { 
		if (maxx > sum - maxx ) 
			cout << maxx - (sum - maxx) << endl ; 
		else cout << 0 << endl ; 
	}
	else {
		if ( sum % 2 == 1 ) 
			cout << 1 << endl; 
		else
			cout << 0 << endl ; 
	}
	
	
}
