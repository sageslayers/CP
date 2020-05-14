#include <bits/stdc++.h>

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

long long x ; 
cin >> x ; 
int t = 0 ; 
long long y=  100 ; 
while ( y < x ) {
	//cout << y << endl ;
	t++ ; 
	y = y + ( y*0.01);
}
cout << t << endl ; 

}

