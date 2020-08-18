#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	int t; 
	cin >> t; 
	while(t--){
		string s; 
		cin >> s ;
		int x ; 
		cin >> x; 
		if ( s == "next" ){
			if ( x == 0 )
				x = 100 ;
			cout << (x-1) % 100 << endl ;
		}
		else{
			
			cout << (x+1) % 100 << endl ;
		}
	}
}


