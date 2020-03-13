#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; 
	
	int a ; 
	cin >> a ; 
	int b ;
	cin >> b; 
	a+=b ;
	cin >> b; 
	a+=b ; 
	
	map<int,int> mp ; 
	
	for  (int i = 0 ; i < a ; i ++ ) {
		int b ; 
		cin >> b; 
		mp[b]++ ; 
	}
	int count = 0 ; 
	for ( map<int,int>::iterator it = 	mp.begin() ; it!= mp.end() ; it++   ) {
		if(it->second >1 )
		count ++ ; 
		
	}
	cout << count <<endl ; 
	for ( map<int,int>::iterator it = 	mp.begin() ; it!= mp.end() ; it++   ) {
		if(it->second >1 )
		cout << it->first << endl ;
		
	}
		cout << endl ; 
	 
	
	
	
}
