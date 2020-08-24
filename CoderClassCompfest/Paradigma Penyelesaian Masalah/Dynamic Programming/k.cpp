#include<bits/stdc++.h>

using namespace std ;

int main () { 
	
	int n , w ; 
	cin >> n >> w ; 
	bool dp[n+2][w+2] ;
	memset(dp,0,sizeof(dp));
	for(int i = 0 ; i <= n ; i ++ ) { 
		dp[i][0] = true ; 
	}

	vector<pair<int,int>> barang ;
	
	for(int i = 1  ; i <= n ; i ++ ) {
		int x;  
		cin >> x; 
		barang.push_back({x,i});
	}
	barang.push_back({0,0});
	sort(barang.begin(),barang.end());
	
	for(int i = 1 ; i <= n ; i ++ ) {
		for(int j = 1 ; j <= w ; j ++ ) { 
			if( barang[i].first <= j  ) { 
				dp[i][j] = dp[i-1][j-barang[i].first] || dp[i-1][j] ;
			}
			else {
				dp[i][j] = dp[i-1][j] ;
			}
		}
	}
	
	int idxI = -1 ;  
	int idxJ = -1 ;  
	
	for(int i = n ; i >= 1 ; i -- ) { 
		if(dp[i][w] && barang[i].first <= w) {
			while(barang[i-1].first == barang[i].first )
				i-- ;
			idxI = i ; 
			idxJ = w ; 
			break ; 
		}
	}
	
	vector<int> ans ; 
	if ( idxI == -1 )
		cout << -1 << endl ; 
	else {
		
		while ( idxJ > 0 && idxI > 0  ) { 
			
			ans.push_back(barang[idxI].second);
			idxJ-= barang[idxI].first;
			while(dp[idxI-1][idxJ])
				idxI--;
		}
		
		sort(ans.begin(),ans.end());
		cout << ans.size() << endl ;
		for ( auto & r : ans ) {
		if( r != ans.back())
			cout << r << " " ;
		else
			cout << r << endl;
	
		}
		
	}
	/*
	for(int i = 0 ; i <= n ; i ++ ) {
		cout << "{" << barang[i].first << ","<< barang[i].second << "}| " ;
		for(int j = 0 ; j<=w ; j++ ) { 
			cout << dp[i][j] << " " ; 
		}
		cout << endl ; 
	}
	*/
}
