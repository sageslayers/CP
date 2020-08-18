#include<bits/stdc++.h>

using namespace std ;

int main() { 
	int n , m , l ;
	cin >> n >> m >> l ; 
	char arr[n][m] ; 
	memset(arr,'.',sizeof(arr));
	for(int i = 0 ; i < l ; i ++ ) {
		for(int j= 0 ; j < m ; j ++ ) {
			arr[i][j] = '*';
		}
	}
	for(int i = 0 ; i < l ; i ++ ) {
		for(int j= 0 ; j < n ; j ++ ) {
			arr[j][i] = '*';
		}
	}
	for(int i = n-1 ; i >= n-l ; i -- ) {
		for(int j= 0 ; j < m ; j ++ ) {
			arr[i][j] = '*';
		}
	}
	
	for(int i = 0 ; i < n ; i ++ ){
		for(int j = 0 ; j < m ; j ++ ) {
			cout << arr[i][j] ;
		}
		cout << endl ;
		}
	
}

