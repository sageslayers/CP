#include<bits/stdc++.h>

using namespace std ;

int main () {
	int x,y; 
	cin >> x >> y ;
	string s; 
	cin >> s; 
	for(int i =0 ; i < s.size() ; i++ ) {
		//cout << x << " " << y << endl ;
		if ( s[i] == 't' ) {
			x--;
		}
		if ( s[i] == 'b' )
			x++;
		if ( s[i] == 'u' )
			y--;
		if ( s[i] == 's' )
			y++;
	} 
	cout << x << " " << y << endl ;
	
	
}
