#include <bits/stdc++.h>


using namespace std ;


int main () {
	
	int t ; 
	cin >> t ; 
	while ( t -- ) {
		int a , b , x  ; 
		cin >> a >> b ;
		int arr[a] ; 
		map<int,int> pos ; 
		for ( int i = 0 ; i < a ; i ++ ) 
			cin >> arr[i] ; 
		for ( int i = 0 ; i < b;  i ++ ) { 
			cin >> x ; 
			pos.insert({x,1}) ; 
		}
		int i ; 
		for ( i = 0 ; i < a ; i ++ ) {
			for ( int j = i+1 ; j < a ; j ++ ) {
				if ( arr[i] > arr[j] && pos[i+1] == 1 )
					swap(arr[i],arr[j]);
				else {
					i = 100 ; 
					break  ;
				}
			}
		}
		for ( i = 0 ; i < a ; i ++ ) 
		cout << arr[i] << " "; 
		cout << endl ; 
		
		for ( i = 0 ; i < a-1 ; i++ ) {
			if ( arr[i] > arr[i+1] ) {
				cout << "NO" << endl; 
				break ; 
			}
		}
		
		if ( i == a-1 )
			cout << "YES" << endl ; 
		
	}
	
	
}
