#include<bits/stdc++.h>

using namespace std ;
bool visited[26][26] ; 
bool visited2[26][26] ; 
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

void change(int x , int y , int c , int m , int n )  {
	arr[x][y] = 0 ; 
	
	if ( arr[x+1][y] == c  && x+1 < m ){
		change(x+1,y,c,m,n) ; 
	}
	if ( arr[x-1][y] == c &&  x-1 >= 0 ){
		change(x-1,y,c,m,n) ; 
	}
	if ( arr[x][y+1] == c &&  y+1 < n ){
		change(x,y+1,c,m,n) ; 
	}
	if ( arr[x][y-1] == c && y-1 >= 0 ){
		change(x,y-1,c,m,n) ; 
	}
	
}

int main()  {
	int bestsum = 0 ;
	memset(visited,0,sizeof(visited));
	sum = 0 ; 
	int m , n ; 
	int b, k ; 
	cin >> m >> n ; 
	int lastI ; 
	int lastJ ; 
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
				if ( sum > bestsum ) {
					bestsum = sum ; 
					lastI = i ;
					lastJ = j ;
				}
				
		}
	}
	
	change(lastI,lastJ,arr[lastI][lastJ],m,n);
	
	
	for (int i = m-2 ; i >= 0 ; i-- ) {
		for (int j = 0 ; j < n ; j ++ ) {
			int x = i+1 ;
			int xCur = i ;
			if(arr[i][j] != 0 ){
				while(arr[x][j] == 0 && x < m ){
					swap(arr[xCur][j],arr[x][j]);
					x++;
					xCur++;
				}
			}
		}
	}
	
	for (int i = 0 ; i < m ; i ++ ) {
		for (int j = 0 ; j < n ; j++ ) {
			if ( arr[i][j] == 0 )
				cout << "." ;
			else
				cout << arr[i][j]  ;
			if (j != n-1 ) cout << " " ;
		}
		cout << endl ; 
	}
	
	
	
}
