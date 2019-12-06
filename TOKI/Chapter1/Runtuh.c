#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int baris,kolom ; 
	scanf("%i %i",&baris,&kolom);
	char string[baris][kolom+1];
	char matrix[baris][kolom+1];
	char satu[kolom+1];
	char nol[kolom+1];
	int lowerbound ; 
	int lowerboundtemp;
	
	int now ; 
	for ( int i = 0 ; i < kolom ; i ++ ) {
		satu[i] = '1';
		nol[i] = '0';
	}
	for ( int i = 0 ; i < baris ; i ++ ) {
		gets(matrix[i]);
				}
	now = baris-1 ; 
	while (1==1){
		if ( strcmp(matrix[now] , satu) == 0 ) {
			lowerbound  = now ; 
			break;
		}
		now -- ;
	}
	for ( int i = 0 ; i < baris ; i ++) {
		if ( strcmp(matrix[i] , satu ) == 0 ) {
			strcpy(matrix[i],nol);
		}
	}
	
	
	for  ( int i = 0 ; i < kolom ; i ++ ) {
		lowerboundtemp = lowerbound ;
		now = lowerbound-1 ; 
		int count = 0 ; 
		while ( now != -1 ) {
			if ( matrix[now][i] == '1' ) {
				count ++ ; 
			}
			now--;
		}
		
		now = baris-1 ; 
		int batas; 
		
		while ( now != lowerbound ) {
			if(matrix[now][i] == '1')
			batas = now ; 	 
			now--;
		}
		for ( int x = 0 ; x < count ; x ++ ) {
			matrix[batas-1][i] = '1' ; 
			batas-- ; 
		}
		while ( batas-- ) {
			matrix[batas][i] = '0' ;
		}
	
		
		
	}
	for ( int i = 0 ; i < baris ; i ++) {
		printf("%s\n",matrix[i]);
	}
	}
	

