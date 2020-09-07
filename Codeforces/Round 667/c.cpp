#include<bits/stdc++.h>

using namespace std ;

int main () {
	int t; 
	cin >> t ;
	while (t-- ) {
		vector<int> res ;  
		long long n , s,len ; 
		cin >> len >> n >> s; 
		int st = 0;
		int b = INT_MAX;
		for(int x = 1 ; x <= 50 ; x ++ ) {
			for(int beda = 1 ; beda <= 50 ; beda ++ ) {
			bool nc = false , sc = false ;
			int cur = x ; 
			for(int j = 0 ; j < len ; j ++ ) { 
				if ( cur == n ){
					nc = true ; 
				}
				if ( cur == s ){
					sc = true ; 
				}
				cur+= beda ;
			}
			if ( (nc && sc) && beda < b ) { 
				//cout << x << " " << beda << endl ;
				st = x ; 
				b = beda ; 
			}
		}
	}
	//cout << st << " " << b << endl ;
	for(int i = 0 ; i < len ; i ++ ) {
		cout << st ;
		if ( i!= len-1 )
			cout << " " ;
		st+= b;  
	}
	cout << endl ;
		
	}
	
}
