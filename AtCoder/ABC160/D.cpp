#include <bits/stdc++.h>

using namespace std ;
	
	
int main () {
	ios_base::sync_with_stdio; 
	cin.tie(0) ; 
	cout.tie(0)  ; 
	int n , x , y ; 
	cin >> n >> x >> y;  
	int graph[n+1][n+1] ; 
	
	
	for( int i = 0 ; i <= n ; i ++ ){
		for (int j = 0 ; j <= n ; j ++ )
			graph[i][j] = 0 ; 
	}  
	for( int i = 1 ; i <= n ; i ++ ) {
		for( int j = i ; j <= n ; j ++ )  {
			if( j == i ) {
				graph[i][j] = 0 ;
			}
			else 
			graph[i][j] = graph[i][j-1] + 1 ; 
	}
}
	for( int i = 1 ; i <= n ; i ++ ) {
		for( int j = 1 ; j <= n ; j ++ )  {
			cout << graph[i][j]  << " " ; 
		}
		cout << endl ; 
	}
	
	
}

