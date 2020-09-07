#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int n ; 
	cin >> n ;
	vector<int> vect(n) ;  
	map<int,bool> mp ; 
	map<int,bool> mp2; 
	for(int i = 0 ; i < n ; i ++ ) {
		cin >> vect[i] ; 
	}
	int dp[n+1] ;
	int prev[n+1];
	prev[1] = 1 ; 
	for(int i = 1 ; i<= n ; i ++ ) {
		dp[i] = 1 ;
	}
	int idx = 0 ;
	int lis = 1 ; 
	for(int i = 1 ; i < n ; i ++ ) {
		for(int j = 0 ; j < i ; j ++ ) { 
			if (vect[j] <= vect[i] ){
				if (  dp[j]+1 >= dp[i] ){
					cout << j << " " << i << endl ;
					dp[i] = dp[j]+1 ;
					prev[i] = j ;
					idx = i ;
				}
			}
		}
	}
	
}
