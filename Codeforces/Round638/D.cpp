#include <bits/stdc++.h>

using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {
int mass ; 
cin >> mass ; 

int num = 1 ; 
int start = 1; 
vector<int> str ; 
while ( start != mass ) { 
int next = -1 ;
for ( int i = num* 2 ; i >= num ; i-- ) {
	if ( start + i == mass ) {
		str.push_back(abs(num-i)) ; 
		start = mass ; 
		next = 1; 
		break ; 
	}
	else if ( start + i > mass ) {
		continue ; 
	}
	else if ( start + i + i > mass ) {
		continue ; 
	}
	else if (start + i + i < mass ) {
		str.push_back(abs(num-i)); 
		num = i ;
		next = i ; 
		start += num ; 
		
		break ; 
	}
}
if ( next == -1 ) {
	cout << -1 << endl ; 
	break ; 
}
}
cout << str.size() << endl ; 
for ( auto & r : str ) 
	cout << r << " " ; 
	cout << endl ;


}

}
