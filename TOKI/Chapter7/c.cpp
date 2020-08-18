#include <bits/stdc++.h>
using namespace std;

int sum = 0 ; 

void dpTree(int n ) {
	if(( n/2 + n/3 + n/4 ) <= n ){
		sum+=n ;
	}
	else {
		dpTree(n/2);
		dpTree(n/3);
		dpTree(n/4);
	}
}

int main(){
	int n ; 
	cin >> n; 
	dpTree(n);
	cout << sum << endl ;
}
