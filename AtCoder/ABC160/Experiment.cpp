#include <bits/stdc++.h>
 
using namespace std ;
	
	
int main () {
	ios_base::sync_with_stdio;
	cin.tie(0) ; 
	cout.tie(0)  ; 
	int x , y  , a, b , c ; 
	cin >> x >> y >> a >> b >> c ; 
	vector <int> red(a) ; 
	vector <int> green(b);
	vector <int> nocolor(c); 
	for ( int i = 0 ; i < a ; i ++ ) 
		cin >> red[i] ; 
	for ( int i = 0 ; i < b ; i ++ ) 
		cin >> green[i] ; 
	for ( int i = 0 ; i < c ; i ++ ) 
		cin >> nocolor[i] ; 
	int i = 5 ; 
	while ( i-- ) {
		int take1 = red[0] ; 
		int take2 = green[0] ;
		int take3 = nocolor[0] ; 
		
		red.erase(red.begin()) ; 
		green.erase(green.begin());
		nocolor.erase(nocolor.begin());
		cout << take1 << " " << take2 << " " << take3 << " " << endl ; 
	}
		
	
}
