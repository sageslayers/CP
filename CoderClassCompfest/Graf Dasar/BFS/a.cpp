#include<bits/stdc++.h>

using namespace std ;
int cost[1001][1001];
int r , col ;
char matrix[1001][1001];

void bfs(int i ,int j ,  int c) { 
	queue<pair<pair<int,int>,int>> q ;
	q.push({{0,0},0});
	while(!q.empty()){
		int x = q.front().first.first ; 
		int y = q.front().first.second ; 
		int C = q.front().second ; 
		q.pop();
		//cout << x << " " << y << " " << C << endl ;
		if ( matrix[x][y] == '#' || cost[x][y] != -1 )
			continue ; 
		cost[x][y] = C ; 
		
		
		if ( x - 1 >= 0 && matrix[x-1][y] != '#' && cost[x-1][y] == -1 ){
			q.push({{x-1,y},C+1});
		}
		if ( x + 1 < r && matrix[x+1][y] != '#' && cost[x+1][y] == -1 ){
			q.push({{x+1,y},C+1});
		}
		if ( y - 1 >= 0 && matrix[x][y-1] != '#' && cost[x][y-1] == -1 ){
			q.push({{x,y-1},C+1});
		}
		if ( y + 1 < col && matrix[x][y+1] != '#' && cost[x][y+1] == -1 ){
			q.push({{x,y+1},C+1});
		}
			
	}
}


int main() {
	cin >> r >> col ; 
	
	memset(cost,-1,sizeof(cost));
	for(int i = 0 ; i < r ; i ++ ) {
		for(int j= 0; j < col ;  j++ ) { 
			cin >> matrix[i][j] ;
		}
	}
	bfs(0,0,0);/*
	for(int i = 0 ; i < r ; i ++ ) {
		for(int j = 0 ; j < col ; j ++ ) {
			cout << cost[i][j] << " " ;
		}
		cout << endl ;
	}*/
	if( cost[r-1][col-1] == 0 )
		cout << -1 << endl ;
	else
		cout << cost[r-1][col-1] << endl ; 
	
	
}
