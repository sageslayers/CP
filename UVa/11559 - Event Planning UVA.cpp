#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,W ;
	int harga = 0 ; 
	int price , i,j ;
	int x,y ; 
	while (scanf("%i %i %i %i",&a,&b,&c,&d)==4) {
		price = b ; 
		for (i = 0 ; i < c ; i++ ) {
			scanf("%i",&x);
			for ( j = 0 ; j < d ; j ++ ) {
				scanf("%i",&y);
				if(y >= a && x*a <= b){
					price = min(price,x*a);
					
				}
			}
		}
		if (price == b )
			printf("stay home\n");
		else {
			printf("%i\n",price);
		}
	}
}
