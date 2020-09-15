#include<bits/stdc++.h>

using namespace std ;

int main () {
	string s; 
	getline(cin,s);
	
	int  k ; 
	cin >> k ; 
	if( k < 0 ) { 
		k *= -1 ;
		k%= 26 ;
		k = 26- k ; 
	}else {
		k%= 26 ; 
	}

	for(int i = 0 ; i < s.size() ; i ++ ) {
		if (s[i] >= 'A' && s[i] <= 'Z' ){
			if( s[i] + k > 'Z' ){
				int cnt = s[i] + k - 'Z' -1 ; 
				s[i] = 'A' + cnt ; 
			}
			else
				s[i]+= k ;
		}else if (s[i] >= 'a' && s[i] <= 'z' ){
			if( s[i] + k > 'z' ){
				int cnt = s[i] + k - 'z'   ; 
				s[i] = 'a' + cnt ; 
			}
			else
				s[i]+= k ;
		}
		
	}
	for(int i = 0 ; i < s.size() ; i ++ ) {
		cout << s[i] ;
		
	}
	cout << endl ;
	
}

