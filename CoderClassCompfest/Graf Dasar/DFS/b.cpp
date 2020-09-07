#include<bits/stdc++.h>

using namespace std ;

int color ; 
int n  , m ; 
char graph[101][101];  
int colorVal[10000];
int visited[101][101];
int cnt ;
void dfs(int i,int j ) {
	cnt++;
	visited[i][j] = color ; 
	if( i - 1 >= 0 && visited[i-1][j] == 0 && graph[i-1][j] == '.' ){
		dfs(i-1,j);
	}
	if ( i + 1 < n && visited[i+1][j] == 0 && graph[i+1][j] == '.'){
		dfs(i+1,j);
	}
	if ( j - 1 >= 0 && visited[i][j-1] == 0 && graph[i][j-1] == '.'){
		dfs(i,j-1);
	}
	if ( j + 1 < m && visited[i][j+1] == 0 && graph[i][j+1] == '.'){
		dfs(i,j+1);
	}
	
}


int main () { 

	cin >> n >> m ;
	memset(visited,0,sizeof(visited));
	for(int i = 0 ; i < n ; i ++ ) { 
		for(int j = 0 ; j < m ; j ++ ) { 
			cin >> graph[i][j] ;
		}
	}
	int best =0 ;
	for(int i = 0 ; i < n ; i ++ ) {
		for(int j = 0 ; j < m ; j ++ ) { 
			if (visited[i][j] == 0 && graph[i][j] == '.' ){
				cnt = 0 ; 
				color++;
				dfs(i,j);
				colorVal[color] = cnt ; 
				best = max (cnt ,best ) ; 
			}
		}
	}
	cout << color << " " << best << endl  ;
}
