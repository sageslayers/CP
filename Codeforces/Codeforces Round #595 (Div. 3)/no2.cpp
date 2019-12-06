#include <bits/stdc++.h>
#include <utility>
#include <iostream>
using namespace std;

int main() {
	
	int a ; 
	scanf("%i",&a);
	for (int i = 0 ; i < a ; i++ ) {
		int b ;
		scanf("%i",&b);
		int c[b+1];
		for (int j = 0 ; j < b ; j++ ) {
			scanf("%i",&c[j]);
		}
		
		int p;
		for ( int k = 0 ; k < b ; k++ ) {
			int count = 0 ; 
			p = c[k] ;
			int flag = 0 ; 
			int total = c[k];
			
			while ( flag == 0 ) {
				if ( c[p-1] == total) {
					count++;
					flag = 1;  
				}
				else { 
					p = c[p-1];
					count++;
				}
			}
			if ( k != b-1 ) 
				printf("%i ",count);
			else 
				printf("%i\n",count);
		}
}
}
