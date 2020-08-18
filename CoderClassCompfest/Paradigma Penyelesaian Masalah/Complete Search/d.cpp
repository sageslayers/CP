#include<bits/stdc++.h>

using namespace std ;

int main() {
	int n ,m , k , q ;
	cin >> n >> m >> k  >> q ;
	char arr[n+1][m+1] ;
	vector<pair<int,int>> vect ;
	for(int i = 1 ; i <= n ; i ++ ) {
		for(int j = 1 ; j <= m ; j ++ ) {
			cin >> arr[i][j] ;
			if( arr[i][j] == 'X' )
				vect.push_back({i,j});
		}
	}
	while(q--) {
		int i , j ; 
		cin >> i >> j ;
		int mini = 999999999;
		for(auto & r : vect ) {
			mini = min( abs(r.first-i) + abs (r.second-j) , mini);
		}
		cout << mini << endl ;
	}
}



