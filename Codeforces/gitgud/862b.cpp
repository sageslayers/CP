#include<bits/stdc++.h>
#define max_n 100005
using namespace std ;

vector<int> adj[max_n] ; 
int color = 0 ; 
vector<long long> sizez(max_n); 
bool visited[max_n] ; 

void dfs (int CurrentNode,int color) { 
	//cout << CurrentNode << " " << color << endl ; 
	visited[CurrentNode]= true ; 
	sizez[color] ++ ; 
	for( auto & r : adj[CurrentNode] ){
		if ( !visited[r] )
			dfs(r,!color) ; 
	}
	
}

int main ()  {
	int n ; 
	cin >> n ; 
	for( int i = 1 ; i < n ; i ++  ) { 
		int x, y ; 
		cin >> x >> y;  
		adj[x].push_back(y) ; 
		adj[y].push_back(x) ; 
	}
	dfs(1,0); 
	cout << 1LL* sizez[0] * sizez[1] - (n-1)  << endl ; 
}
