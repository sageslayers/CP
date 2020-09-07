#include<bits/stdc++.h>

using namespace std ;

int main() {
	string a , b ; 
	cin >> a >> b ; 
	int n1 = a.size() ; 
	int n2 = b.size() ; 
	int dp[n1+1][n2+1] ; 
	for(int i = 0 ; i <= n1 ; i ++ )
		dp[i][0] = 0 ;
	for(int i = 0 ; i <= n2 ; i ++ ) 
		dp[0][i] = 0 ; 
	
	
	for(int i = 0 ; i < n1; i++ ) { 
		for(int j = 0 ; j < n2 ; j ++ ) {
			if ( a[i] == b[j] ) { 
				dp[i+1][j+1] = 1+dp[i][j] ; 
			}
			else {
				dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}

		
	cout << dp[n1][n2] << endl ; 
	
}
