#include <bits/stdc++.h>
using namespace std;



int main(){
	int t; 
	cin >> t ;
	while (t--){
	string s ;
	cin >> s; 
	int n = s.size() ; 
	
	int dp[n][n] ;
	int maxL = 0 ; 


	
	
	for(int i = n-1 ; i >= 0 ; i -- ) {
		for(int j = i ; j < n ; j ++ ) {
			if( i == j ) 
				dp[i][j] = 1 ; 
			else {
				if( s[i] == s[j] ){
					if( j-i == 1 ){
						dp[i][j] = 2;
					}  
					else {
						dp[i][j] = max( dp[i+1][j],dp[i][j-1]);
						dp[i][j] = max(dp[i][j] , dp[i+1][j-1]+2);
					}
				}
				else {
					if( j-i == 1 ){
						dp[i][j] = max ( dp[i+1][j],dp[i][j-1]);
					}
					else {
						
						dp[i][j] = max( dp[i+1][j],dp[i][j-1]);
						dp[i][j] = max(dp[i][j] , dp[i+1][j-1]);
					}
				}
			}
		//	cout << dp[i][j] << endl ; 
		maxL = max(maxL,dp[i][j]);
		}
	}
	cout << maxL << endl ;
}
}

