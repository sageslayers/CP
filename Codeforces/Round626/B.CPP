#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	
		int a , b , f  ;
		cin >> a >> b >> f ;  
		vector<int> arrA ; 
		vector<int> arrB ; 
		int x , y ; 
		
		for ( int i = 0 ; i  < a ;  i ++ )  {
			cin >> x ; 
			arrA.push_back(x) ; 
			
		} 
		for ( int i = 0 ; i < b ; i ++ )  {
			cin >> y;  
			arrB.push_back(y) ; 
		}
		
		int matrix[a][b] ; 
		for ( int i = 0 ; i < a ; i ++ ) {
			for (int j = 0 ; j < b ; j ++ ) {
				matrix[i][j] = arrA[i] * arrB[j] ; 
			}
			
		}
	
		
		int count = 0 ;
		int found ;  
		
		if( f<= a )  {
			for ( int i = 0 ; i < a ; i ++ ) {
				for ( int j = 0 ; j < b-f+1  ; j ++ ) {
					for ( int k = j ; k < j + f ; k ++ ) {
						found = 1 ; 
						cout << matrix[i][k] << " " << endl ; 
						if ( matrix[i][k] != 1 ) 
							found = 0 ;
						
					}
					if ( found == 1 ) count ++ ; 
				}
			}
			
		}
		
		
		cout << count << endl ; 
	
	
	
}
