#include<bits/stdc++.h>

using namespace std ;

int main(){
	int W ,  n ; 
	cin >> W >> n ;  
	vector<int> price(n) ; 
	vector<int> weight (n) ;
	vector<int> barang[n+1][W+1] ; 
	int dp[n+1][W+1] ;  
	for(int i = 0 ; i <  n ; i ++ ) { 
		cin >> weight[i] >> price[i] ;
	}

	for(int i = 0 ; i <= n ; i ++ ) {
		for(int w = 0 ; w <= W ; w ++ ) {
			if ( i == 0 || w == 0 ) 
				dp[i][w] = 0 ; 
			else {
				if( weight[i-1] <= w ){
					if( price[i-1] + dp[i-1][w-weight[i-1]] > dp[i-1][w] ){
						dp[i][w] = price[i-1] + dp[i-1][w-weight[i-1] ];
						for( auto & r : barang[i-1][w-weight[i-1]] )
							barang[i][w].push_back(r); 
						barang[i][w].push_back(i);
					}
					else {
						for(auto & r : barang[i-1][w] )
							barang[i][w].push_back(r);
						dp[i][w] = dp[i-1][w] ; 
					}
					
				}
				else {
					for( auto & r : barang[i-1][w] )
							barang[i][w].push_back(r); 
					dp[i][w] = dp[i-1][w];
					
				}
			}
			cout << dp[i][w] << " " ;
		}
		cout << endl ; 
	}
	//for(int i = 0 ; i < barang[n][W].size() ; i ++ ) {
	//	cout << barang[n][W][i] << endl; 
	
//}

	//cout << dp[n][W] << endl; 
}
