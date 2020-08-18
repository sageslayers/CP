#include <bits/stdc++.h>
using namespace std;



int main(){
	int n ; 
	cin >> n ; 
	vector<int> coin ; 
	for(int i= 0 ; i < n ; i ++ ) {
		int x; 
		cin >> x ; 
		coin.push_back(x) ;
	}
	int amount ; 
	cin >> amount ;
	int dp[amount+1] ;
	memset(dp,10000,sizeof(dp));
	dp[0]=  0;  
	for(int i = 0 ; i < coin.size() ; i ++  ) {
		for(int j = 0 ; j <= amount ; j ++ ) {
			if(coin[i] <= j ){
				dp[j] = min(dp[j],dp[j-coin[i]]+1);
			}
		}
	}
	cout << dp[amount] << endl ;
}
