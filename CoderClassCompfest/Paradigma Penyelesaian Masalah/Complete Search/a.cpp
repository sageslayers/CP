#include<bits/stdc++.h>

using namespace std ;

int main() {
	int n , q ;
	cin >> n >> q ; 
	map<string,int> mp ;
	for(int i = 0 ; i < n ; i ++ ) {
		string s; 
		cin >> s; 
		mp[s] = i+1 ; 
	}
	while(q--){
		string s ;
		cin >> s; 
		cout << (mp[s] ==  0 ? -1 : mp[s]) << endl ; 
	}
}
