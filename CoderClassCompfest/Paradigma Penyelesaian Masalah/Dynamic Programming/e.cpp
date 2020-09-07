#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int n ; 
	cin >> n ;
	vector<int> vect(n+1) ;  
	for(int i = 1 ; i <= n ; i ++ ) {
		cin >> vect[i] ; 
	}
	int dp[n+1] ; 
	long long num[n+1] ; 
	for(int i = 1 ; i<= n ; i ++ ) {
		dp[i] = 1 ;
		num[i] = 1; 
	}
	
	int lis = 1 ; 
	for(int i = 2 ; i <= n ; i ++ ) {
		for(int j = 1 ; j < i ; j ++ ) { 
			if (vect[j] < vect[i] ){
				if (  dp[j]+1 > dp[i] ){
					dp[i] = dp[j]+1 ;
					num[i] = num[j] ;
				}
				else if ( dp[j]+1 == dp[i] ){
					num[i] += num[j] % 1000000007 ;
				}
				lis = max(lis,dp[i]);
			}
		}
	}
	long long ans = 0 ; 
	for(int i = 1 ; i <= n ; i ++ ) { 
		if ( dp[i] == lis ) 
			ans += num[i] % 1000000007 ;
	}/*
	for(int i = 1 ; i <= n ; i ++ ) 
		cout << dp[i] << " " ;
	cout << endl ;
	for(int i = 1 ; i <= n ; i ++ ) 
		cout << num[i] << " " ;
	cout << endl ;*/
	cout << lis << " " << ans% 1000000007 << endl ; 
}
