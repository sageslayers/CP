#include <bits/stdc++.h>
using namespace std ;

int main () { 
	int b[516] ;
	int n , m ; 
	cin >> n >> m ; 
	int a[n] ;
	memset(b,0,sizeof(b)); 
	vector<int> c ;
	for(int i = 0 ; i < n ; i ++ ) {
		cin >> a[i] ;
	}
	for(int i = 0 ; i < m ; i ++ ) {
		int x; 
		cin >> x; 
		b[x] = 1 ; 
	}
	int valmax = INT_MIN;
	for(int i = 0 ; i < n ; i ++ ) {
		int val = INT_MAX ;
		for(int j = 0 ; j < 512 ; j ++ ) {
			if(b[j] != 0 ){
			val = min(val,a[i]&j);
	     	}
		}
		valmax =max(valmax,val);
	}
	for(int i = 0 ; i < n ; i ++ ) {
		int val = INT_MAX ;
		for(int j = 0 ; j < 512 ; j ++ ) {
			if(b[j] != 0 ){
			val = min(val,a[i]&j | valmax );
	     	}
	     	
		}
		c.push_back(val);
	}
	int sum = 0 ; 
	for( auto & r : c )
		sum|= r; 
	cout << sum << endl; 

}
