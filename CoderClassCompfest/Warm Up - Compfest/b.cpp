#include<bits/stdc++.h>

using namespace std ;

int main () {
	int n , m ; 
	string s ; 
	cin >> n >> m  ; 
	cin >> s ; 
	unsigned long long len = s.size() ; 
	map<char,unsigned long long> mp ; 
	 for(int i = 0 ; i < s.size() ; i ++ ) { 
		 mp[s[i]]++; 
	 } 
	while ( m-- ) { 

		char a ;
		string b; 
		cin >> a >> b ;
		
		
		unsigned long long tmp = mp[a];
		mp[a] = 0 ;
		len-= tmp ; 
			for(int i = 0  ; i < b.size() ; i ++ ) {
				len+= tmp ;
				mp[b[i]] = mp[b[i]] + (1*tmp);
				
			}
		
	}
	cout << len << endl ; 
}
