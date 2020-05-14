#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int a ,i , j ;
	int b[1000],c[1000], d[1000] ;
	int print[1000] ;
	
	scanf("%i",&a);
	
	for ( i = 0 ; i < a ; i ++ ) {
		scanf("%i",&b[i]);
		scanf("%i",&c[i]);
		scanf("%i",&d[i]);
	}
	
	for ( i = 0 ; i < a ; i ++ ) {
		print[i] = 0 ;
		while (b[i]  >= 1 && c[i]  >= 2 || c[i] >=1 && d[i]  >= 2 ) {
			while( c[i] -1  >= 0 && d[i] -2 >= 0    ) {
				c[i] -= 1 ;
				d[i] -=2 ;
				print[i] += 3 ;
			}
			while(b[i]  -1 >= 0 && c[i] -2 >= 0  ) {
				b[i] -= 1 ;
				c[i] -=2 ;
				print[i] += 3 ;
			}
		}
	}
	for ( i = 0 ; i < a ; i ++ ) {
	printf("%i\n",print[i]);
	}
	
	
}

