#include <bits/stdc++.h>

using namespace std;



int main() { 

ios_base::sync_with_stdio ;
cin.tie(NULL) ; 

int n ; 
cin >> n ; 
int odd= 0 ; 
int even = 0 ;
for ( int i = 0 ; i < n ; i ++ ) {
	int x ; 
	cin >> x ; 
	if ( x % 2 == 0 ) 
		odd++ ; 
	else
		even++;
}
cout << min(odd,even) << endl ; 

}


