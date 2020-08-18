#include<bits/stdc++.h>

using namespace std ;

int solve(int n ){
	int sum = 0 ; 
	for (int i = 1 ; i <= n ; i ++ ) {
		if( n%i == 0 )
			sum++;
	}
	return sum ; 
}

int main() { 
	int n ; 
	cin >> n ; 
	int sum = 0 ;
	for(int i = 1 ; i <= n ; i ++ ){
		sum+= solve(i);
	}
	cout << sum << endl; 
}


