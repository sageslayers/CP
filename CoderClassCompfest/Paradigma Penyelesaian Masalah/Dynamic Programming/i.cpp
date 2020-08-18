#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	
int n , amount ; 
cin >> n >> amount ; 
int dp[amount+1];
for(int i = 1 ; i <= amount ; i ++ )
	dp[i] = 100000;
dp[0] = 0 ;
set<int> s ; 
for(int i = 0 ; i < n ; i ++ ){
	int x;
	cin >> x;
	s.insert(x);
}

for( auto & coins : s ) {
	for(int j = 1 ; j <= amount ; j ++ ) {
		//cout << dp[j] << " ";
		if(coins <= j ) {
			dp[j] = min(dp[j],dp[j-coins]+1);
		}
		
	}
	//cout << endl ;
}
cout << (dp[amount] == 100000 ? -1 : dp[amount]) << endl ;
	
}

