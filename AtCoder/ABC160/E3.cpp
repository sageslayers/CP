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
		 
	sort(red.begin() , red.end() , greater<int>() );
	sort(green.begin(), green.end(), greater<int>() );  
	sort(nocolor.begin() , nocolor.end() , greater<int>() ) ; 
	long long sum = 0 ; 
	
	while (true) {
		int take1, take2 , take3 ; 
		take1=take2=take3 = 0 ;
		if(nocolor.size() > 0 )
			take3= nocolor[0] ; 
		cout << red[0]<< " " << green[0] << " " << take3 << endl ;
			if(red[0] >= green[0] && red[0] >= take3 && x > 0  ) {
				sum+= red[0] ;
				x--  ;
				red.erase(red.begin());
			}
			else if ( green[0] >= red[0] && green[0] >= take3 && y > 0 ) {
				sum+= green[0] ; 
				y-- ; 
				green.erase(green.begin());
			}
			else if ( take3 >= red[0] && take3 >= green[0] ) {
				if ( x > 0 ) { 
					if ( green[0] >= red[0] ) {
						x-- ; 
						sum+= take3 ; 
						nocolor.erase(nocolor.begin());
					}
				}
				else {
					y--;  
					sum+= take3 ; 
					nocolor.erase(nocolor.begin());
				}
				
			}
			
		 
	
		if ( x == 0 && y == 0 )
			break ; 
	}
		cout << sum << endl ; 
}
