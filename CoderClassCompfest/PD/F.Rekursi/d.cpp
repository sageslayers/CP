#include<bits/stdc++.h>

using namespace std ;


int main() { 
	int n , k ; 
	cin >> n >> k ;
	vector<int> arr;
	for(int i = 1 ; i <= n ; i ++ ) {
		arr.push_back(i);
	}
	bool check = true ; 
	for(int i= 1 ; i < n ; i ++ ) {
		if( abs(arr[i]-arr[i-1]) > k ){
			check = false ; 
			break ; 
		}
	}
	if(check){
		for(int i= 0 ; i < n ; i ++ ) {
			cout << arr[i] ;
			if(i!=n-1)
				cout << " ";
		}
		cout << endl;
	}
	while(next_permutation(arr.begin(),arr.end())){
		bool check = true ; 
	for(int i= 1 ; i < n ; i ++ ) {
		if( abs(arr[i]-arr[i-1]) > k ){
			check = false ; 
			break ; 
		}
	}
	if(check){
		for(int i= 0 ; i < n ; i ++ ) {
			cout << arr[i] ;
			if(i!=n-1)
				cout << " ";
		}
		cout << endl ;
	}
	}
	
	
	
}



