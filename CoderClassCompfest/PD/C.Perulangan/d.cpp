#include<bits/stdc++.h>

using namespace std ;

int main() { 
	int n ; 
	cin >> n; 
	int best = 0 ; 
	for(int i = 0 ; i < n ; i  ++ ) {
		int x; 
		cin >> x; 
		best = max(x,best);
	}
	cout << best << endl ; 
}


