#include <bits/stdc++.h>
using namespace std ; 

long long combination (int val ) { 
	long long ans = 1; 
	ans = 1ll*val * (val-1); 
	ans = ans / 2 ; 
	return ans ; 
}


int main() { 
	int n ; 
	cin >> n ; 
	map<int,int> mp ;
	map<int,long long> sz ; 
	vector<int> vect(n) ; 
	for (int i = 0 ; i < n ; i ++ ) {
		cin >> vect[i] ; 
		mp[vect[i]]++ ; 
	}
	for ( auto & r : mp ) {
		sz[r.first] = combination(r.second); 
	}
	long long sum = 0 ; 
	for (auto & r : sz ) {
		sum+= r.second ; 
	}
	
for ( int i = 0 ; i < n ; i ++ ) {
		cout << sum-sz[vect[i]]+combination(mp[vect[i]]-1) << endl ; 
	}
	
}
