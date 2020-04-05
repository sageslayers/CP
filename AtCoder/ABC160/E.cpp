#include <bits/stdc++.h>

using namespace std ;
	
	
int main () {
	ios_base::sync_with_stdio; 
	cin.tie(0) ; 
	cout.tie(0)  ; 
	int x , y  , a, b , c ; 
	cin >> x >> y >> a >> b >> c ; 
	vector <int> red(a) ; 
	vector <int> blue(b);
	vector <int> nocolor(c); 
	
	for ( int i = 0 ; i < a ; i ++ ) 
		cin >> red[i] ; 
	for ( int i = 0 ; i < b ; i ++ ) 
		cin >> blue[i] ; 
	for ( int i = 0 ; i < c ; i ++ ) 
		cin >> nocolor[i] ; 
red.begin() = red.begin();
	blue.begin() = blue.begin();
	nocolor.begin() = nocolor.begin(); 
	sort(red.begin() , red.end() , greater<int>() );
	sort(blue.begin(), blue.end(), greater<int>() );  
	sort(nocolor.begin() , nocolor.end() , greater<int>() ) ; 
	long long sum = 0 ; 
	while ( x > 0 || y >  0 ) {
		int merah , biru, kosong ; 
		merah = biru = kosong = 0 ; 
		if ( x > 0 && red.size() > 0 )
			merah = red[0] ;
		if ( y > 0 && blue.size() > 0 )
			biru = blue[0] ; 
		if ( nocolor.size() > 0 )
			kosong = nocolor[0] ; 
		if ( x > 0 && y > 0 ) {
			if(merah >= biru && merah >= kosong ) {
				sum+= merah ;
				x-- ; 
				red.erase(red.begin()); 
			}
			else if ( biru >= merah && biru >= kosong ) {
				sum+= biru ; 
				y-- ; 
				blue.erase(blue.begin()) ; 
				
			}
			else{
				if (merah > biru ) {
					biru-- ; 
					nocolor.erase(nocolor.begin());
				}
			} 
		}
		else if ( x >0 && y == 0 ) {
			if( merah > kosong ) {
				sum+= merah;  
				red.erase(red.begin()); 
				x-- ; 
			}
			else {
				sum+=kosong ; 
				nocolor.erase(nocolor.begin());
				x-- ; 
			}
			}
		else if ( x == 0 && y > 0 ){
			if ( biru > kosong ) { 
				sum+= biru ; 
				blue.erase(blue.begin());
				y-- ; 
			}
			else {
				sum+= kosong ; 
				nocolor.erase(nocolor.begin());
				y-- ; 
			}
		}
		}
		cout << sum << endl ;
		
	}
	
	

