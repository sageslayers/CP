#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	int t; 
	cin >> t; 
	while(t--){
	unsigned long long x , y ; 
	cin >> x >> y; 
	if (  (x+y)/2 +1 == x || (x+y)/2 +1 == y ){
		cout << "Voting Ulang" << endl ;
		
	}
	else {
		if ( y >= ((x+y)/2+1)  )
			cout << "Toni" << endl ;
		else if ( x >= ((x+y)/2+1)  )
			cout << "Tere" << endl ; 
		else
			cout << "Voting Ulang" << endl ;
	}
}
}

