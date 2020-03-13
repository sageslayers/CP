#include<bits/stdc++.h>

using namespace std ;

int block[100005] ; 
int user[100005] ; 
int size[100005] ; 


int find(int x ) {
	
	return user[x] == x ? x : user[x] = find(user[x]);
	
}

int main () { 
	
	int t  ; 
	int n , k , m ; 
	cin >> n >> k >> m ;
	for (int i = 1 ; i <= n ; i ++ ) {
		user[i] = i ; 
		size[i] = 1 ;
	}
	int a , b ; 
	int rootA , rootB ; 
	for ( int i =  1 ; i <= k ; i ++ )  {
		cin >> a >> b;
		
		rootA = find(a) ; 
		rootB = find(b) ; 
		block[a]++ ; 
		block[b]++ ;  
		if ( rootA != rootB ) {
			user[rootA] = user[b] ; 
			size[rootB] += size[rootA] ;
		
		}
		
		
	}
	for (int i = 1 ; i <= m  ; i ++ )  {
		cin >> a >> b ;
		rootA = find(a) ; 
		rootB = find(b) ; 
		if ( rootA == rootB ) {
			block[a]++ ; 
			block[b]++ ; 
		}
	}
	for ( int i = 1 ; i <= n ; i ++ ) {
		cout << size[find(i)] -1 - block[i] << " " ;
	}
	cout << endl ; 
	
}
