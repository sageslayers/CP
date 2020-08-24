#include<bits/stdc++.h>

using namespace std ;

int main () { 
int n , q , last , start; 
cin >> n >> q ; 
char xx = 'D';
if ( q == 0 ) {
	cout << "Tipe A" << endl ;
	exit(0);
}
else {
int x , y ;
cin >> x >> y; 
last = y;
start = x; 
q--;
}
while(q--){
	int x , y; 
	cin >> x >> y ;
	if ( x != last ) {
		xx = 'C' ; 
	}
	last = y; 
}	
cout << start << " " << last << " " << xx <<  endl;
	if( start == last && xx != 'C' ){
		xx = 'A';
	}
	else if ( start != last && xx != 'C' ){
		xx = 'B' ; 
	}
	cout << "Tipe " << xx << endl ;
}

