#include<bits/stdc++.h>

using namespace std ;
bool visited[26][26] ; 
bool visited2[26][26] ; 
int arr[26][26] ; 
int sum ;
int sum2 ; 

void floodfill(int arrTemp[26][26] , int x , int y , int c , int m , int n)  {
	if(arrTemp[x][y]!=0 ){
		arrTemp[x][y] = 0 ;
	visited[x][y] =  true ;
	sum++ ;  
	if ( arrTemp[x+1][y] == c && !visited[x+1][y] && x+1 < m ){
		floodfill(arrTemp,x+1,y,c,m,n) ; 
	}
	if ( arrTemp[x-1][y] == c && !visited[x-1][y] && x-1 >= 0 ){
		floodfill(arrTemp,x-1,y,c,m,n) ; 
	}
	if ( arrTemp[x][y+1] == c && !visited[x][y+1] && y+1 < n ){
		floodfill(arrTemp,x,y+1,c,m,n) ; 
	}
	if ( arrTemp[x][y-1] == c && !visited[x][y-1] && y-1 >= 0 ){
		floodfill(arrTemp,x,y-1,c,m,n) ; 
	}
}

}

void floodfill2(int arrTemp[26][26] , int x , int y , int c , int m , int n)  {
	if(arrTemp[x][y]!=0 ){
		arrTemp[x][y] = 0 ;
	sum2++ ;  
	if ( arrTemp[x+1][y] == c && x+1 < m ){
		floodfill2(arrTemp,x+1,y,c,m,n) ; 
	}
	if ( arrTemp[x-1][y] == c && x-1 >= 0 ){
		floodfill2(arrTemp,x-1,y,c,m,n) ; 
	}
	if ( arrTemp[x][y+1] == c && y+1 < n ){
		floodfill2(arrTemp,x,y+1,c,m,n) ; 
	}
	if ( arrTemp[x][y-1] == c && y-1 >= 0 ){
		floodfill2(arrTemp,x,y-1,c,m,n) ; 
	}
}

}



void runtuh(int arrTemp[26][26] , int m , int n ) { 
		for (int i = m-2 ; i >= 0 ; i-- ) {
		for (int j = 0 ; j < n ; j ++ ) {
			int x = i+1 ;
			int xCur = i ;
			if(arrTemp[i][j] != 0 ){
				while(arrTemp[x][j] == 0 && x < m ){
					swap(arrTemp[xCur][j],arrTemp[x][j]);
					x++;
					xCur++;
				}
			}
		}
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
	int num = 1 ; 
	for (int i = 0 ; i < m ; i ++ ) {
		for(int j = 0 ; j < n ; j ++ ) {
			sum = 0 ;
			if( !visited[i][j]){
				int tempArr[26][26] ; 
				memcpy(tempArr,arr,26*26*sizeof(int));
				floodfill(tempArr,i,j,tempArr[i][j],m,n);
				if ( sum < 2 ) continue ; 
				runtuh(tempArr,m,n);
				
			
				
				for(int x = 0 ; x < m ; x++ ) {
					for(int y = 0 ; y < n ; y ++ ) {
						sum2 = 0 ;
						if(tempArr[x][y] != 0 ) {
							floodfill2(tempArr,x,y,tempArr[x][y],m,n);
						}
						//if ( sum2 < 2 )
							//continue ; 
						
						bestsum = max(bestsum,sum*(sum-1) + sum2*(sum2-1)) ;
					}
				}
				
				
				
			}
				
				
		}
	}
	
	
	
	

	cout << bestsum << endl ; 
	
	
	
	
}
