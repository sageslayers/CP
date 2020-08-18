#include<bits/stdc++.h>

using namespace std ;


int main() { 
		int n ;
		cin >> n ; 
		while(n--){
			string s; 
			cin >> s ;
			int sz = s.size();
			bool pal = true ;  
			for(int i = 0 ; i < sz/2 ; i ++ ) {
				if(s[i] != s[sz-i-1]){
					pal = false ;
					break ; 
				}
			}
			if ( pal )
				cout << "palindrom" << endl ;
			else 
				cout << "bukan palindrom" << endl; 
			
		}
}


