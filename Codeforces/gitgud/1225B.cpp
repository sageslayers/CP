#include <bits/stdc++.h>

using namespace std ;

int main () { 
	
	
	int t; 
	cin >> t ; 
	while (t--) {
		map<pair<int,int>,bool> mp ; 
		long long sum = 0 ; 
		int n , m ; 
		cin >> n >> m ; 
		vector<int> price(n); 
		for  ( int i = 0  ; i < n ; i ++ ) {
			cin >> price[i] ;
		}	
		if (  m < n || n == 2) {
			cout << -1 << endl ;
			continue ; 
		}
		else {
			
			for ( int i = 0 ; i < m ; i ++ ) {
				int x = i+1 %n ;
				int y = (i+1)% n + 1 ;
				if(!mp[{x-1,y-1}]){
				
				sum+= price[x-1] + price[y-1] ;
				mp[{x-1,y-1}] = true ;
				mp[{y-1,x-1}] = true ;
				}
			}
			cout << sum << endl ;
			for ( int i = 0 ; i < m ; i ++ ) {
				int x = i %n +1 ;
				int y = ((i+1)% n) + 1 ;
				cout << x << " " << y  << endl ;
				
			}
			
		}
		
		
	}
	
}
