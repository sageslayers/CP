#include <bits/stdc++.h>

using namespace std ;

int main() {


	int n , w ; 
	cin >> n >> w ;
	int weight[n+1] ; 
	int price[n+1] ; 
	for(int i = 1 ; i <= n ; i ++ ) cin >> weight[i] ;
	for(int i = 1 ; i <= n ; i ++ ) cin >> price[i] ; 
	int dp[100001];
	memset(dp,0,sizeof(dp));
	for(int i = 1 ; i <= n ; i ++ ) { 
			for(int j = 100000 ; j > price[i] ; j-- ){ 
				if ( dp[j-price[i]] > 0 && dp[j-price[i]]+weight[i] < dp[j] || dp[j-price[i]] > 0 && dp[j] == 0  ){
					dp[j] = dp[j-price[i]] + weight[i];
				}
			}
				if( weight[i] < dp[price[i]] || dp[price[i]] == 0 )
					dp[price[i]] = weight[i] ;
			
	}
	int best = 0;
	for(int i = 1 ; i <= 100000 ; i ++ ) {
		if ( dp[i] <= w && dp[i] != 0 )
			best = i ; 
	}
	cout << best << endl ; 
}
