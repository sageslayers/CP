#include <bits/stdc++.h>

using namespace std ;
long long dp[1001][1001] ;
long long sum = 0 ; 
#define MOD 1000000007 ; 
map<pair<int,int>,int> mp ; 
int main () { 
	int r , c , n ; 
	cin >> r >> c >> n ; 
	memset(dp,0,sizeof(dp));
	
	for(int i = 0 ; i < n ; i ++ ) { 
		int x, y ; 
		cin >> x >> y ; 
		mp[{x-1,y-1}] = 1 ; 
	}
	if(mp[{0,0}] != 1 )
		dp[0][0] = 1 ;
	for(int i = 1 ; i < r ; i ++ ) {
		if(mp[{i,0}] != 1 )
			dp[i][0] = dp[i-1][0] ;
	}
	for(int i = 1 ; i < c ; i ++ ) {
		if(mp[{0,i}] != 1 )
			dp[0][i] = dp[0][i-1] ;
	}

	
	for(int i = 1 ; i < r ; i ++ ) { 
		for(int j = 1 ; j < c ; j ++ ) { 
			if (mp[{i,j}] != 1 ) 
				dp[i][j] = (dp[i-1][j] + dp[i][j-1] ) % MOD ; 
			}
		}

	cout << dp[r-1][c-1] << endl ;
}
