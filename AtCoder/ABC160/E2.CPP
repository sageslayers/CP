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
red.begin() = red.begin();
	green.begin() = green.begin();
	nocolor.begin() = nocolor.begin(); 
	sort(red.begin() , red.end() , greater<int>() );
	sort(green.begin(), green.end(), greater<int>() );  
	sort(nocolor.begin() , nocolor.end() , greater<int>() ) ; 
	long long sum = 0 ; 
	while ( x > 0 ) {
		int take1 , take2 ; 
		take1 = take2 = 0 ; 
		if(nocolor.size() > 0 )
			take2 = nocolor[0] ; 
		take1 = red[0] ; 
		if ( take2 > take1 && take1 < green[0] ) {
			sum+= take2 ; 
			nocolor.erase(nocolor.begin());
		}
		else {
			sum+= take1 ; 
			red.erase(red.begin());
		}
		x-- ; 
	}
	while ( y > 0 ) {
		int take1 , take2 ; 
		take1 = take2 = 0 ; 
		if(nocolor.size() > 0 )
			take2 = nocolor[0] ; 
		take1 = green[0] ; 
		if ( take1 > take2 ) {
			sum+= take1 ; 
			green.erase(green.begin());
		}
		else {
			sum+= take2 ; 
			nocolor.erase(nocolor.begin());
		}
		y-- ; 
	}
	cout << sum << endl ;
}
