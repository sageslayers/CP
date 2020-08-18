#include<bits/stdc++.h>

using namespace std ;

int main() { 
	
	int n , k ; 

	cin >> n >> k ; 
	int arr[n+10] ; 
	memset(arr,0,sizeof(arr));
	for(int i = 0 ; i < k ; i ++ ) {
		int x; 
		cin >> x; 
		arr[x] ++ ; 
	}
	bool found = false ; 
	for(int i = 1 ; i <= n ; i ++ ) {
		if(arr[i] == 0 ){
			if( found )
				cout << " " ;
			cout << i ;
			found = true ;
		}
	}
	cout << endl ;
}


