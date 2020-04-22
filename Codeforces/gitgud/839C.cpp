#include<bits/stdc++.h>
#define max_n 100005
using namespace std ;

vector<int> adj[max_n] ; 
int color = 0 ; 
vector<long long> sizez(max_n); 
bool visited[max_n] ; 
long long sum = 0 ; 
vector<int> cost(max_n+5); 
int minimum ;

void dfs (int CurrentNode,int mini) {
	//cout << "#" << mini << endl ; 
	if( cost[CurrentNode] < mini ) 
		minimum = cost[CurrentNode] ; 
	visited[CurrentNode]= true ; 
	for( auto & r : adj[CurrentNode] ){
		if ( !visited[r] )
			dfs(r,minimum) ; 
	}
	
}

int main ()  {
	int n ,p,x,y ; 
	cin >> n >> p ; 
	
	for( int i = 1; i <= n ; i ++ ) 
		cin >> cost[i] ; 
	for( int i = 0 ; i < p ; i ++ ) { 
		cin >> x >> y;  
		adj[x].push_back(y) ; 
		adj[y].push_back(x) ; 
	}
	for( int i = 1 ; i <= n ; i ++ )  {
		
		if( !visited[i] ) {
			dfs(i,1000000009); 
			sum += minimum ; 
		}
	}
	cout << sum<< endl ; 
}
