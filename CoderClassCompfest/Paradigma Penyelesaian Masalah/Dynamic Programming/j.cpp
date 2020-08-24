#include<bits/stdc++.h>

using namespace std ;
int main () { 
	int n , w ; 
	cin >> n >> w; 
	int weight[n];
	int price[n] ; 
	int dp[n+1][1001];
	int memo[n+1][1001];
	for(int i = 0 ; i < n ; i ++ ) {
		cin >> weight[i] ;
	}
	for(int i = 0 ; i < n ; i ++ ) {
		cin >> price[i] ;
	}
	memset(dp,0,sizeof(dp));
	memset(memo,0,sizeof(memo));
	for(int i = 1 ; i <= n ; i ++ ) { 
		for(int v = 1 ; v <= 1000 ; v ++ ) {
			if( price[i-1] <= v ) {
				if(dp[i-1][v-price[i-1]] + price[i-1] == v ){
					for(int x = i ; x <= n ; x ++ ){
						dp[x][v] = dp[i-1][v-price[i-1]] + price[i-1];
						memo[x][v] = memo[i-1][v-price[i-1]] + weight[i-1]; 
					}

				}
			}
		}
	}
	int sum = 0 ; 
	int I ;
	int V ; 
	
	for(int i = 0 ; i <= n ; i ++  ) {
		for(int v  = 1 ; v<= 1000 ; v ++ ){
			if( dp[i][v] > sum && memo[i][v] <= w){
				sum = dp[i][v] ; 

			}
		}
	}
	
	cout << sum <<  endl;
}
