#include<bits/stdc++.h>

using namespace std ;

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);

int n ,  q ; 
cin >> n >> q ; 
bool adj[n+1][n+1] ; 
memset(adj,false,sizeof(adj));
while(q--) { 
	int x , y ; 
	cin >> x >> y; 
	adj[x][y] = true ; 
	adj[y][x] = true ; 
}
int q2 ;
cin >> q2 ; 
while (q2-- ) { 
	int x , y ; 
	cin >> x >> y ;
	int cnt = 0 ; 
	for(int i = 1 ; i <= n ; i ++ ) { 
		if ( i == x || i == y ) 
			continue ; 
		if ( adj[x][i] && adj[y][i] )
			cnt++;
	}
	cout << cnt << endl ; 
}	
	
}
