#include<bits/stdc++.h>

using namespace std ;
unsigned long long fact[1000001];
unsigned long long inv[1000001];

void generate(){
	int i = 1 ;
	fact[i] = 1 ;
	fact[0] = 1 ; 
	for(int i = 2 ; i <= 1000000 ; i ++ ) {
		fact[i] = (fact[i-1] * i )% 998244353 ;
	}
}




int main(){
	map<int,int> mp ;
	int n ;
	cin >> n ; 
	vector<int> vect ;
	 
	memset(fact,0,sizeof(fact));
	generate();
	
	unsigned long long sum = 0 ;
	for(int i = 0 ; i < n ; i ++ ) {
		int x ;
		cin >>  x ;
		mp[x]++;
		sum+= x; 
	}
	unsigned long long ans = 1 ;
	int cursum = sum ; 
	
	cout << ans /n  << endl ;
	
	
}
