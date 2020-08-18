#include<bits/stdc++.h>

using namespace std ;


int main() { 
	int n  ;
	cin >> n ; 
	int arr[n] ;
	int cnt = 0 ; 
	for(int i = 0 ; i < n ; i ++ ) {
		cin >> arr[i] ; 
	}
	for(int i = 0 ; i < n ; i ++ ) { 
		int min_idx = i ; 
		for(int j = i+1 ; j < n ; j ++ ) { 
			if(arr[j] < arr[min_idx])
				min_idx = j ;
		}
		if(min_idx != i ){
			swap(arr[i],arr[min_idx]);
			cnt++;
		}
	}
	cout << cnt << endl ; 
}



