#include <bits/stdc++.h>


using namespace std ;


int main () {
	
	int t ; 
	cin >> t ; 
	while ( t -- ) {
		int a , b , x  ; 
		cin >> a >> b ;
		pair <int,int> arr[a];
		map <int,int> mp ;  
		for ( int i = 0 ; i < a ; i ++ ) {
			cin >> x ; 
			arr[i]= make_pair(x,i);
		}
		for ( int i = 0 ; i  < b ; i ++ ) {
			cin >> x;  
			mp.insert({x,1});
		}
		sort(arr , arr+a);  
		
		int count ; 
		for ( int i = 0 ; i < a ; i ++ ) 
			cout << arr[i].first <<  " " << arr[i].second << endl ; 
		for ( int i = 0 ; i < a ; i ++ ) {
			if ( arr[i].second != i ) {
				if ( mp[arr[i].second] != 1 ) {
					cout << "NO" << endl ; 
					i = a ; 
					}
				else 
					count ++ ; 
			}
			else
				count ++ ; 
			
		}
		if ( count == a )
			cout << "YES" << endl ; 
		
	}
}
