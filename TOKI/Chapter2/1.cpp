#include <bits/stdc++.h> 
#define MOD 1000000007



using namespace std; 
int main() 
{
	
	int prime ;  
	scanf("%i",&prime);
	int x  = -1 ; 
	int variant = 0 ;  
	for ( int i = 2 ; i <=  prime ; ++ i )  {
		int count =  0 ; 
		if ( prime % i == 0 ) { 
			variant ++ ; 
			x++ ; 
		while( prime % i == 0 ) {
			prime /= i ;
			count ++ ; 
		}  
			if ( variant == 1 && count > 1) 
				printf("%i^%i",i,count) ; 
			else if ( variant == 1 && count == 1 )
				printf("%i",i);
			else if ( variant  > 1 && count == 1 ) 
				printf("x %i",i);
			else
				printf("x %i^%i",i,count);  
			if ( prime != 1 ) 
				printf(" ");
		}
		if ( prime == 1 )
			break ; 
	} 
	printf("\n");
	
} 
