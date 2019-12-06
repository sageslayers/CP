#include <bits/stdc++.h>


using namespace std ; 

int main () {
	int baris,kolom ; 
	scanf("%i %i",&baris,&kolom);
	char string[baris+1][kolom+1];
	char matrix[baris+1][kolom+1];
	char satu[kolom+1];
	char nol[kolom+1];
	int lowerbound = -1 ; 
	int lowerboundtemp = 0 ;
	int tes = 1; 
	int now ; 
	for ( int i = 0 ; i <= kolom ; i ++ ) {
		if ( i == kolom ) {
			satu[i] = '\0';
			nol[i]  = '\0'; }
		else {
		satu[i] = '1';
		nol[i] = '0'; 
		}
	} 
	for ( int i = 0 ; i < baris ; i ++ ) {
		cin >> matrix[i] ; 
				}
	int flag = 0 ; 
	while ( flag == 0 ) {
	now = 0 ;  
	while (now != baris){
			//printf("tes4\n");
		if ( strcmp(matrix[now] , satu) == 0 && lowerbound == -1 ) {
			lowerbound  = now ; 
			strcpy(matrix[now],nol) ; }
		else if ( strcmp(matrix[now] , satu) == 0 ) {
			strcpy(matrix[now],nol) ;
			lowerbound = now ;  }
		now ++ ;
	}
	//printf("lowerbound %i",lowerbound);
	for  ( int i = 0 ; i < kolom ; i ++ ) {
		//	printf("tes3\n");
		if ( lowerbound == -1 ) {
			for ( int i = 0 ; i < baris ; i ++ ) 
				if (strcmp(matrix[i],nol) == 0 )
					lowerbound = i ; 
		}
		now = lowerbound ; 
		int count = 0 ; 
		while ( now != -1 ) {
			if ( matrix[now][i] == '1' ) {
				count ++ ; 
			}
			now--;
		}
		now = baris-1 ; 
		int batas= baris  ;
		
		while ( now != lowerbound ) {
			//printf("tes5\n");
			if (strcmp(matrix[baris-1],nol)== 0)
				{
					batas = baris ; 
					break ; 
					}
			if(matrix[now][i] == '1')
			batas = now ; 	 
			now--;
		}
		for ( int x = 0 ; x < count ; x ++ ) {
			matrix[batas-1][i] = '1' ; 
			batas-- ; 
		}
		while ( batas!= 0 ) {
			matrix[batas-1][i] = '0' ;
			batas--;
		}
	
		
		
	}
	int ax = 0 ; 
	for ( int f = 0 ; f  < baris ; f ++ ) {
			if ( strcmp(matrix[f] , satu) == 0 )
				ax = 1 ;
	}
	if ( ax == 1 )
		flag = 0 ; 
	else
		flag = 1;  
		//printf("Lower Bound : %i\n",lowerbound);
	
	
	}
	//printf("\n");
	for ( int i = 0 ; i < baris ; i ++) {
		printf("%s\n",matrix[i]);
	}
	}
	

