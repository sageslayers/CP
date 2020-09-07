#include<bits/stdc++.h>

using namespace std ;
int color[1001] ; 
int colorValue[1001] ; 
int cnt ; 
vector<int> adj[1001] ; 
void dfs(int n,int warna ) {
		if(color[n] !=  0 )
			return ; 
		color[n] = warna ;
			cnt++;
		for ( auto & r  : adj[n] )  {
			dfs(r,warna);
		}
}

int main () { 
	int n  , q ;
	cin >> n >> q ; 
	
	memset(color,0,sizeof(color));
	
	while(q--) {
		int x, y ; 
		cin >> x >> y; 
		adj[x].push_back(y);
		adj[y].push_back(x);
		
	}
	int warna = 1 ; 
	for(int i = 1 ; i <= n ; i ++ ) {
		 cnt = 0; 
		if(color[i] == 0 ){
			dfs(i,warna);
			colorValue[warna] = cnt ; 
			warna++;
		}
		
	}
	for(int i = 1 ; i <= n ; i ++ ) {
		cout << color[i] <<  " " ; 
	}
	cout << endl ; 
		for(int i = 1 ; i <= n ; i ++ ) {
		cout << colorValue[i] <<  " " ; 
	}
	cout << endl ; 
	int q2 ; 
	cin >> q2 ; 
	while(q2-- ) { 
		int x , y ; 
		cin >> x >> y ; 
		if ( color[x] != 0 && color[x] == color[y] )
			cout << colorValue[x]-2 << endl ;
		else
			cout << 0 << endl; 
	}
	
}
