#include<bits/stdc++.h>

using namespace std ;
int n , m ; 
int sum ;
void solve(int x,int y) {
	if(x == n && y == m )
		sum ++ ;
	else {
		if(x+1 <=n)
			solve(x+1,y);
		if(y+1 <= m )
			solve(x,y+1);
	}
}

int main() { 
	sum = 0 ; 
	cin >>  n >> m ;
	solve(1,1);
	cout << sum << endl ;
}


