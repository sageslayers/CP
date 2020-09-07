#include<bits/stdc++.h>

using namespace std ;
vector<int> adj[100001] ; 
int in[100001] ; 
int out[100001] ; 
int cnt ; 

void dfs(int n){
	cnt++;
	in[n] = cnt ; 
	for( auto & r : adj[n] ) {
		if (in[r] == 0 )
			dfs(r);
	}
	cnt++;
	out[n] = cnt ; 
}

int main ()  {
	memset(in,0,sizeof(in));
	cnt = 0 ; 
	int n ; 
	cin >> n ;
	for(int i = 0 ; i < n- 1 ; i ++ ) {
		int x , y ; 
		cin >> x >> y; 
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1);
	int q; 
	cin >> q ; 
	while ( q-- ) { 
		int x , y ;
		cin >> x >> y; 
		if ( in[x] < in[y] && out[x] > out[y] || in[y] == 0  || in[x] == in[y])
			cout << "TIDAK" << endl ; 
		else
			cout << "YA" << endl ; 
	}
}
