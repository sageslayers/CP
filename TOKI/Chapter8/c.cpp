#include<bits/stdc++.h>

using namespace std ;

int main () {
	int q; 
	cin >> q;
	vector<pair<int,int>> vect ;
	int sum = 0 ;
	int size = 0 ;
	while (q-- ){
		string s ;
		cin >> s; 
		 if ( s == "add" ) {
			 int x , y ; 
			 cin >> x >> y; 
			 vect.push_back({x-sum,y});
			 size+= y; 
			 cout << size << endl ; 
		 }
		 else if ( s == "del" ){
			 int y; 
			 cin >> y ;
			 cout << vect.back().first + sum << endl ;
			 while ( y != 0 ) {
				 if( y > vect.back().second ){
					 size-= vect.back().second ;
					 y-= vect.back().second ;
					 vect.pop_back();
				 }
				 else{
					size-= y;
					vect.back().second -=y ;
					y = 0 ;
				}
			 }
		 }
		 else if ( s == "adx" ){
			 int x ;
			 cin >> x;
			 sum+=x ; 
		 }
		 else {
			 int x ;
			 cin >> x ;
			 sum -= x ;
		 }
 	}
}
