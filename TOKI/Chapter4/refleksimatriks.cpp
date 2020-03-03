#include <bits/stdc++.h>
using namespace std ; 

int main () {

ios_base::sync_with_stdio(false) ;
cin.tie(NULL); 

int b , k , i , j ; 
cin >> b >> k ; 
int arr [b][k] ; 


for ( i = 0 ; i < b ; i ++ ) 
	for ( j = 0 ; j < k ; j ++ )
		cin >> arr[i][j] ;
		
int x , y ;
cin >> x >> y  ; 
int arr2[x][y] ; 

for (i = 0 ; i < x ; i ++ ) 
	for (j = 0 ; j < y ; j ++ )
		cin >> arr2[i][j] ;

int found = 0 ; 
for ( i = 0 ; i < b ; i ++ ) {
	for ( j = 0 ; j < k ; j ++ ){ 
		if (arr[i][j] != arr2[i][j] ) {
			i = b+1 ;  
		}
	}
	
}
	if ( i == b ) {
		cout << "identik\n" ;
		return 0 ; 	
	}
for ( i = 0 ; i < b ; i ++ ) {
	for ( j = 0 ; j < k ; j ++ ) {
		//cout <<  i << " " << j << " " << arr[i][j] << " " << arr2[j][i] <<endl ; 
			if ( arr[i][j] != arr2[j][i] )
				i = b+1 ; 
				
	}
}
	if ( i == b ) {
		cout << "diagonal kanan bawah\n" ;
		return 0 ; 	
	}
int awal = 0 ; 
int akhir = 0 ; 
for ( i = k-1 ; i >= 0 ; i -- ) {
	for ( j = b-1 ; j >= 0  ; j -- ) {
		//cout <<  i << "xaxa " << j << " " << arr[awal][akhir] << " " << arr2[j][i] <<endl ; 
			if ( arr[awal][akhir] != arr2[j][i] ){
				i = -2 ;
				break ; }
				 
				akhir ++ ;
	}
	awal ++ ; 
	akhir = 0 ;
}
//cout << i << j << endl ; 

if ( i == -1  ) {
		cout << "diagonal kiri bawah\n" ;
		return 0 ; 	
	}

awal = b-1 ; 
akhir = 0 ; 
for ( i = 0 ; i < b ; i ++ ) {
	for (j = 0 ; j < k ; j ++ ) {
		//cout <<  i << "## " << j << " " << arr[i][j] << " " << arr2[awal][akhir] <<endl ; 
		if ( arr[i][j] != arr2[awal][akhir] ) {
			i = b+1 ; }
		akhir ++ ; 
	}
	awal--; 
	akhir = 0 ; 
}
if ( i == b ){
	cout << "horisontal\n"  ; 
	return 0 ; }

awal =  0 ; 
akhir = k-1;  
for ( i = 0 ; i < b ; i ++ ) {
	for ( j = 0 ; j < b ; j ++ ) {
		if (arr[i][j] != arr2[awal][akhir] )
			i = b+1 ; 
			akhir-- ;
		}
		awal++;
		akhir = k-1; 
	}
if ( i == b ){
	cout << "vertikal\n" ;
	return 0 ; 
}
	
cout << "tidak identik\n" ;
}
