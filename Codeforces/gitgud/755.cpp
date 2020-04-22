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

void dfs (int CurrentNode) {
	visited[CurrentNode]= true ; 
	for( auto & r : adj[CurrentNode] ){
		if ( !visited[r] )
			dfs(r) ; 
	}
	
}

int main ()  {
	int n ; 
	int x;  
	cin >> n;  
	for( int i = 1 ; i <= n ; i ++ )  {
		cin >> x ; 
		if ( i != x ) { 
		adj[i].push_back(x) ; 
		adj[x].push_back(i) ; 
		}
	}
	int count = 0 ; 
	for( int i = 1;  i<= n ; i ++ ) {
		if (!visited[i] ) { 
			dfs(i); 
			count++ ; 
		}
	}
	
	cout << count << endl ; 
}
