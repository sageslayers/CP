#include <bits/stdc++.h>


using namespace std ;

int main(){
	vector<int> a  ; 
	vector<int> b ; 
	int n ; 
	cin >> n ; 
	vector<int> vect(n); 
	for(int i = 0 ; i < n ; i  ++ ) {
		cin >> vect[i] ; 
	}
	for(int i = 0 ; i < n ; i ++ ) {
		for(int j = 0 ; j < n ; j ++ ) {
			for(int k = 0 ; k < n ; k ++ ) {
					a.push_back(vect[j] * vect[k] + vect[i] );
					if ( vect[k] != 0 )
					b.push_back((vect[i] + vect[j] ) * vect[k] );
			}
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	/*
	for(auto & r : a ) 
		cout << r << " " ;
	cout << endl ; 
	for( auto & r : b ) 
		cout << r << " " ;
	cout << endl ; 
	*/
	int cnt = 0 ; 
	for(int i = 0 ; i < a.size() ; i ++ ) {
		auto it = lower_bound(b.begin(),b.end(),a[i]);
		auto it2 = upper_bound(b.begin(),b.end(),a[i]);
		cnt += it2-it ; 
	}
	cout << cnt << endl ;
}
