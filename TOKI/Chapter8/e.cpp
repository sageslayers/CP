#include<bits/stdc++.h>
 
using namespace std ;
 
int main () {
	int n ;  
	cin >> n;
	vector<int> arr(n+2);
	arr[0] = INT_MAX;
	arr[n+1] = INT_MAX; 
	int l[n+1];
	int r[n+1];
	l[0] = 0 ;
	r[0] = n ; 

	for(int i = 1 ; i <= n ; i ++  ) {
		cin >> arr[i] ;
		
	}
 

 
	for(int i = 1 ; i<= n ; i ++ ) {
		if( arr[i-1] >= arr[i] )
			l[i] = i-1 ;
		else {
			int x = l[i-1];
			while(arr[x] < arr[i] ){
				x = l[x];
			}
			l[i] = x ; 
		}
 
	}
	for(int i = n ; i>= 1 ; i -- ) {
		if( arr[i+1] > arr[i] )
			r[i] = i+1 ;
		else {
			int x = r[i+1];
			while(arr[x] < arr[i] ){
				x = r[x];
			}
			r[i] = x ; 
		}
 
	}
	
	for(int i = 1 ; i <= n ; i ++ ){
		cout << l[i] <<  " " ;
	}
	cout << endl ; 
	for(int i = 1 ; i <= n ; i ++ ){
		cout << r[i] <<  " " ;
	}
	cout << endl; 
	
	long long sum = 0 ; 
	for(int i = 1 ; i <= n ; i ++ ) {
		if( l[i] == 0 && r[i] == n+1 )
			continue ;
		else {
			if( l[i] == 0 )
				sum+= arr[r[i]];
			else if ( r[i] == n+1 )
				sum+= arr[l[i]];
			else 
				sum+= min(arr[l[i]],arr[r[i]]);
		}
	}

		cout << sum   << endl ; 
 
}
