#include<bits/stdc++.h>

using namespace std ;
vector<int> result ;


int main(){
	int W ,  n ; 
	cin >> W >> n ;  
	pair<int,int> dp[n+1][W+1];
	vector<int> item ;
	vector<int> price ;
	for(int i = 0 ; i <  n ; i ++ ) { 
		int x , y ;
		cin >> x >> y; 
		item.push_back(x);
		price.push_back(y);
	}

	for(int i = 0 ; i <= n ; i ++ ) {
		for(int w = 0 ; w <= W ; w ++ ) {
			if ( i == 0 || w == 0 ) 
				dp[i][w].first = 0 ; 
			else {
				if( item[i-1] <= w ){
					if( price[i-1] + dp[i-1][w-item[i-1]].first > dp[i-1][w].first   ){
						dp[i][w].first = price[i-1] + dp[i-1][w-item[i-1]].first;
						dp[i][w].second = dp[i-1][w].second + item[i-1] ; 
					}
					else if (price[i-1] + dp[i-1][w-item[i-1]].first == dp[i-1][w].first  ) {
						if( dp[i-1][w-item[i-1]].second + item[i-1] < dp[i-1][w].second ){
							dp[i][w].first = price[i-1] + dp[i-1][w-item[i-1]].first;
							dp[i][w].second = dp[i-1][w].second + item[i-1] ; 
						}
						else {
							dp[i][w].first = dp[i-1][w].first ;
							dp[i][w].second = dp[i-1][w].second ;  
						}
					}
					else {
						dp[i][w].first = dp[i-1][w].first ;
					    dp[i][w].second = dp[i-1][w].second ;  
					}
					
				}
				else {
					dp[i][w].first = dp[i-1][w].first ;
					   dp[i][w].second = dp[i-1][w].second ;  
					
				}
			}
		//	cout << dp[i][w].first << " " ;
		}
		//cout << endl ; 
		
	}
	
    int w = W; 
    for (int i = n; i > 0 ; i--) { 
		if(dp[i][w].first == 0 )
			break ;
        if (dp[i][w] == dp[i - 1][w])  
            continue;         
        else {
			result.push_back(i);
            w = w - item[i - 1]; 
        } 
    } 
 sort(result.begin(),result.end());
 for(auto & r : result )
	cout << r << endl ;
	


	
}
