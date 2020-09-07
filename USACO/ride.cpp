/*
ID: sageslayers
PROG: ride
LANG: C++                 
*/


#include <bits/stdc++.h>


using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;
    int x = 1 ;
    int y = 1 ; 
    
    for(int i = 0 ; i < a.size() ; i ++ ) { 
		x =  (x * (a[i]-64)) %47 ;
	}
	for(int i = 0 ; i < b.size() ; i ++ ) { 
		y= (y *  (b[i]- 64)) %47 ;
	}
	if ( x == y )
		fout <<  "GO" << endl ;
	else
		fout <<  "STAY" << endl ;
    return 0;
}
