#include<bits/stdc++.h>
using namespace std ;


int main () 
{ 
		int baris , kolom ; 
		int tofind ; 
		scanf("%i %i",&baris,&kolom);
		scanf("%i",&tofind);
		int matrix[baris][kolom] ; 
		for ( int i = 0  ; i < baris ;  ++i ) {
			for ( int j = 0 ; j < kolom ; ++j ) {
					scanf("%i",&matrix[i][j]);
			}
		}
		int savedbaris = baris ; 
		int savedkolom = kolom ; 
		
		
		for ( int i = 0  ; i < baris ;  ++i ) {
			for ( int j = 0 ; j < kolom ; ++j ) {
				int sum = 1 ; 
					if ( i - 1 > -1 )
						sum *= matrix[i-1][j] ;
					if ( j -1 > -1 )
						sum *= matrix[i][j-1] ;
					if ( i + 1 < baris )
						sum *= matrix[i+1][j] ;
					if ( j + 1 < kolom )
						sum *= matrix[i][j+1] ;
					if ( sum == tofind ) {
						if ( j < savedkolom ) {
							savedkolom =  j ; 
							savedbaris = i ; 
						}
						else if ( j == savedkolom ) {
							if ( i < savedbaris )  {
								savedkolom =  j ; 
								savedbaris = i ; 
							}
						}
					}
					
			}
		}
		if ( savedbaris == baris )
			printf("0 0\n");
		else 
			printf("%i %i\n",savedbaris+1,savedkolom+1);
		
	
	
}
