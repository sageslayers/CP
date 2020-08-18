#include<bits/stdc++.h>

using namespace std ;



int main ()  {
	int t ;
	cin >> t; 
	while ( t--  ) {
		long long int n, m , k ; 
		cin >> n >> m >> k ;
		long long int prev = 1;
		long long cnt = 0 ;
		long long lastX = 0 ;
		for(int i = 0 ; i < m ; i ++ ) {
			int x ;
			cin >> x ; 
			if ( x == prev ) {
				cnt++;
				prev++;
				lastX = x ; 
			}
			else {
				long long ln = x - prev ;
				if ( lastX > prev && (lastX-prev)%k == 0 ){
					cnt+= 
				}
				
			}
			
		}
		
		
	}

}





