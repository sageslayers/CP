#include<bits/stdc++.h>

using namespace std ;

char grid[1001][1001] ; 
int cost[1001][1001] ; 

int main() {  
	int n ; 
	cin >> n ; 
	int dp[n][n] ;
	for(int i = 0 ; i < n ; i ++ ) {
		for(int j = 0 ; j < n ; j ++ ) { 
			cin >> grid[i][j] ; 
			dp[i][j] = n*n; 
		}
	}
	
	deque<pair<int,int>> dq ; 
	dq.push_back({0,0});
	
	dp[0][0] = (grid[0][0] == '0' ? 0 : 1 ); 
	
	while(!dq.empty()){
		
		int x = dq.front().first ; 
		int y = dq.front().second ;
		int cost = dp[x][y] ; 
		dq.pop_front(); 
		if ( x-1 >= 0  ) {
			int c = cost ; 
			if ( grid[x-1][y] == '1' ) { 
				c+= 1;
				if ( c < dp[x-1][y] ){
					dq.push_back({x-1,y});
					dp[x-1][y] = c ;  
				} 
			}else {
				if ( c < dp[x-1][y] ){
					dq.push_front({x-1,y});
					dp[x-1][y] = c ; 
				}
			}
		}
		if ( x+1 < n   ) {
			int c = cost ; 
			if ( grid[x+1][y] == '1' ) { 
				c+= 1;
				if ( c < dp[x+1][y] ){
					dq.push_back({x+1,y});
					dp[x+1][y] = c ; 
				} 
			}else {
				if ( c < dp[x+1][y] ){
					dq.push_front({x+1,y});
					dp[x+1][y] = c ; 
				}
			}
		}
		if ( y+1 < n   ) {
			int c = cost ; 
			if ( grid[x][y+1] == '1' ) { 
				c+= 1;
				if ( c  < dp[x][y+1] ){
					dq.push_back({x,y+1});
					dp[x][y+1] = c ; 
				} 
			}else {
				if ( c < dp[x][y+1] ){
					dq.push_front({x,y+1});
					dp[x][y+1] = c ; 
				}
			}
		}
		if ( y-1 >= 0   ) {
			int c = cost ; 
			if ( grid[x][y-1] == '1' ) { 
				c+= 1;
				if ( c < dp[x][y-1] ){
					dq.push_back({x,y-1});
					dp[x][y-1] = c ; 
				} 
			}else {
				if ( c < dp[x][y-1] ){
					dq.push_front({x,y-1});
					dp[x][y-1] = c ;
				}
			}
		}
		
	}
	cout << dp[n-1][n-1] << endl ;
			
}


