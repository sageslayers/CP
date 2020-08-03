#include<bits/stdc++.h>

using namespace std ;
bool visited[26][26] ; 
int arr[26][26] ; 
int sum ; 

void floodfill(int x , int y , int c , int m , int n )  {
	visited[x][y] =  true ;
	sum++ ;  
	if ( arr[x+1][y] == c && !visited[x+1][y] && x+1 < m ){
		floodfill(x+1,y,c,m,n) ; 
	}
	if ( arr[x-1][y] == c && !visited[x-1][y] && x-1 >= 0 ){
		floodfill(x-1,y,c,m,n) ; 
	}
	if ( arr[x][y+1] == c && !visited[x][y+1] && y+1 < n ){
		floodfill(x,y+1,c,m,n) ; 
	}
	if ( arr[x][y-1] == c && !visited[x][y-1] && y-1 >= 0 ){
		floodfill(x,y-1,c,m,n) ; 
	}
	
}

int main()  {
	int bestsum = 0 ;
	memset(visited,0,sizeof(visited));
	sum = 0 ; 
	int m , n ; 
	int b, k ; 
	cin >> m >> n ; 
	for ( int i = 0 ; i < m ; i ++ ) {
		for (int j = 0 ; j < n ; j ++ ) { 
				cin >> arr[i][j] ; 
		}
	}
	for (int i = 0 ; i < m ; i ++ ) {
		for(int j = 0 ; j < n ; j ++ ) {
			sum = 0 ;
			if( !visited[i][j]) 
				floodfill(i,j,arr[i][j],m,n);
				bestsum = max(sum,bestsum);
		}
	}
	cout << bestsum*(bestsum-1) << endl; 
}
