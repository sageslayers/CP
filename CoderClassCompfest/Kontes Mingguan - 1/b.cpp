#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	int t; 
	cin >> t; 
	while(t--){
	unsigned long long x , y ; 
	cin >> x >> y; 
	if ( x > y && x - y >= 2 )
		cout << "Tere" << endl ; 
	else if ( y > x && y-x >= 2 )
		cout << "Toni" << endl ;
	else
		cout << "Voting Ulang" << endl ;
}
}

