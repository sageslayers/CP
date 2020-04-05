#include <bits/stdc++.h>

using namespace std ;

int main () { 
	int n ; 
	cin >> n ; 
	string s ; 
	cin >> s ; 
	
	int count = 0 ;  
	for(int i = 0 ; i < n-1 ; i +=2 ){
		if(s[i] == s[i+1] ) {
			if( s[i+1] == 'b' )
				s[i] = 'a' ; 
			else
				s[i] = 'b' ; 
			count ++ ; 
		}
		
	}
	cout << count << endl ; 
		cout << s << endl ; 
	
}
