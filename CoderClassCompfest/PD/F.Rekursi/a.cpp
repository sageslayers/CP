#include<bits/stdc++.h>

using namespace std ;
int sum ;

void memo(int n ) {
	int floor = n / 2 ; 
	int ceil = n / 2 ; 
	if(n%2 != 0 )
		ceil++;
	if(n==1)
		sum++ ; 
	else {
		sum++;
		memo(floor);
		memo(ceil);
	}
}

int main() { 
	int n  ;
	 cin >> n ; 
	 memo(n);
	 cout << sum << endl ; 
}


