#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	
	int r , c ; 
	cin >> r >> c ;
	int arr[r+1][c+1] ;  
	int dp[r+1][c+1];
	memset(dp,0,sizeof(dp));
	memset (arr,0,sizeof(arr));
	for (int i = 1 ; i <= r;  i ++ ) {
		for (int j = 1 ; j <= c ; j ++ ) {
			cin >> arr[i][j] ; 
		}
	}
	int maxs = 0 ; 

	for(int i = 1 ; i <= r ; i ++ ) {
		for(int j = 1 ; j <= c ; j ++ ) {
			dp[i][j] = arr[i][j] + dp[i-1][j] + dp [i][j-1] - dp[i-1][j-1];
			maxs=  max ( maxs , dp[i][j]);
		}
		
	}


	cout << maxs << endl ; 
	
}
