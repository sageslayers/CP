#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; 
	int t;  
	cin >> t ; 
	
	while (t-- ) {
		int n ;
		cin >> n ;   
		map<int,int> mp ; 
		int arr[2*n]  ;
		for ( int i = 0 ; i < 2*n ; i +=2 )   { 
			cin >> arr[i] ; 
			mp.insert({arr[i],1}) ;
			//cout << "XX " << arr[i] << endl ;  
		}
		//cout << "##" << mp[2] << mp[3] << mp[4] << mp[5] <<endl ; 
		int maxsize = 2*n ;  
		int i ;
		for(  i = 1 ; i < 2*n ; i += 2 ) {
			int found = 0 ; 
			int j; 
			for ( j = arr[i-1]+1 ; j <= maxsize ; j ++ )  {
			//	cout << " $ " << j << endl ;  
				if( j > maxsize ) {
					cout << -1 << endl ; 
					j = maxsize+1000 ; 
				}
			//	cout << mp[j] << endl;   
				if ( mp[j] == 0 ) {
					found = 1 ; 
					arr[i] = j ; 
					mp[j] = 1; 
					j = maxsize+1000 ;
					
				}
			
			}
		//	cout << j << " #" << found << endl ; 
			if ( j == maxsize+1000 || found == 0 ) {
				cout << -1 << endl ; 
				i = 2*n+1000 ; 
			}
			
		}
		//cout << i << endl ; 
		if ( i != 2*n+1002  ) {
		for ( int i = 0 ; i < 2*n ; i ++ ) {
			cout << arr[i] << " " ;
		}
		cout << endl ; 
	}
		
	}
	
}
