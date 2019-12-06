
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
		int c[b];
		int d[b];
		int e[b];
		for (int j = 0 ; j < b ; j++ ) {
			scanf("%i",&c[j]);
			c[j] -=1 ;
		}
		int p;
		for (int k = 0 ; k < b ; k++ )
			d[k] = -1 ;
		for ( int k = 0 ; k < b ; k++ ) {
			int count = 0 ; 
			p = c[k] ;
			int flag = 0 ; 
			int total = c[k];
			if (d[c[k]] == -1 ) {
				while(flag==0){
					if(total == c[p]){
					flag = 1;  
					p = c[p];
					e[count] = p;
					count ++ ; 
				
				}
					else {
						p = c[p];
						e[count] = p ; 
						count ++ ;
					}
				
				}
				for (int x = 0 ; x < count ; x++){
					d[e[x]] = count ;
				}
			}
			
		}

			for(int y = 0 ; y < b ; y ++ ){ 
			if (y!= b-1)
				printf("%i ",d[y]);
			else 
				printf("%i\n",d[y]);
		}
		


}
}
