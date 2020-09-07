#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	
int n , amount ; 
cin >> n >> amount ; 
int dp[amount+1];
int coin[n] ; 
memset(dp,-1,sizeof(dp));
for(int i = 0 ; i < n ; i ++ ){
	cin >> coin[i] ; 
}

for(int i = 0 ; i < n ; i ++ ) { 
	for(int j = amount ; j > coin[i] ; j-- ) {
		if(dp[j-coin[i]] > 0 ) {
			if ( dp[j] == -1 )
				dp[j] = dp[j-coin[i]]+1 ; 
			else if ( dp[j] >  0 ){
				dp[j] = min(dp[j-coin[i]]+1 , dp[j]);
			}
		}
	}
	if( coin[i] <= amount )
		dp[coin[i]] = 1 ; 
}
cout << dp[amount] << endl; 
	
}

