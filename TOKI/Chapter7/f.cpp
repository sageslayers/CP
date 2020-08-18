#include<bits/stdc++.h>


using namespace std ;
int memo[501][501] ;
int best ;
int sum;
int v, h , k ; 

long long int rec(int i , int j , int arr[][501]){
	//cout << i << " " << j << endl ; 
	//cout << arr[i+1][j] << endl ; 
	if( memo[i][j] != 0 )
		return memo[i][j]; 
	memo[i][j] = 1; 
	if( arr[i+1][j] == 1 ){
		memo[i][j] += 1 ;
		int tempJ = j;
		while ( tempJ >= 0 && arr[i+1][tempJ-1] == 1 ){
			tempJ--;
		}
		int tempJ2 = j ; 
			while ( tempJ2 < h && arr[i+1][tempJ2+1] == 1 ){
			tempJ2++;
		}
		if(tempJ2 + 1 < h ){
			memo[i][j]+= rec(i,tempJ2+1,arr);
		}
		if( tempJ -1 >= 0 ) {
			memo[i][j]+= rec(i,tempJ-1,arr);
		}
	}else {
		if( i + 1 < v ) 
			memo[i][j] = rec(i+1,j,arr);
		else
			memo[i][j] = 0 ;
	}
	return memo[i][j];
	
}



int main () {
	cin >> v >> h >> k ; 
	int arr[501][501] ;
	memset(arr,0,sizeof(arr));
	memset(memo,0,sizeof(memo));
	for(int i = 0 ; i < k ; i ++ ) {
		int x1,y1,x2,y2 ; 
		cin >> x1 >> y1 ;
		cin >> x2 >> y2 ;
		for(int j = x1 ;j <= x2 ; j ++ ) {
			for(int l= y1 ; l <= y2 ;l ++ ) {
				arr[j-1][l-1] = 1 ;
			}
		}
	}

	best = 0 ; 
	
	for(int i = 0 ; i < h ; i ++ ) {
		sum = 0 ;
		sum += rec(0,i,arr);
		best = max(best,sum);
	}
	
	cout << best << endl ; 
	
	//rec(0,5,arr);
	for(int i = 0 ; i < v ; i ++ ) {
		for(int j = 0 ; j < h ; j ++ ) {
			cout << memo[i][j] << " " ;
		}
		cout << endl ; 
		
	}
}
