#include<bits/stdc++.h>

using namespace std ;

int main () { 
	
	int n , m ; 
	cin >> n >> m ; 
	int coin[n] ; 
	string bitmask[m+1];
	int dp[m+1];
	memset(dp,-1,sizeof(dp));
	for(int i = 0 ; i < n ; i ++ ) { 
		cin >> coin[i] ;
		bitmask[0].push_back('0');
	}
	for(int i = 0 ; i < n ; i ++ ) { 
		for(int j = m ; j > coin[i] ; j-- ){
			if ( dp[j-coin[i]] > 0 ) {
				if (dp[j] == -1 ) {
					string s = bitmask[j-coin[i]];
					s[i] = '1' ; 
					bitmask[j] = s ; 
					dp[j] = dp[j-coin[i]]+1;
				}
				else {
					if ( dp[j-coin[i]]+1 <= dp[j]  ) {
						string s = bitmask[j-coin[i]];
						s[i] = '1' ; 
						
						if ( s > bitmask[j] || dp[j-coin[i]]+1 < dp[j]
						
						
						
						 ){
						bitmask[j] = s ; 
						dp[j] = dp[j-coin[i]]+1;
						}
						
					}

					
				}
			}
		}
		if ( coin[i] <= m && dp[coin[i]] != 1 ) { 
			dp[coin[i]] = 1 ; 
			string s = bitmask[0] ;
			s[i] = '1' ; 
			bitmask[coin[i]] = s ;
		}
	}
	if ( bitmask[m] == "" )
		cout << -1 << endl; 
	else {
		vector<int> vect ;
		for(int i = 0 ; i < n ; i ++ ) { 
			if ( bitmask[m][i] == '1' )
				vect.push_back(i) ; 
		}
		cout << vect.size() << endl ; 
		for(int i = 0 ; i < vect.size() ; i ++ ) { 
			cout << vect[i]+1; 
			if ( i != vect.size() -1 ) 
				cout << " " ; 
		}
		cout << endl; 
	}
}
