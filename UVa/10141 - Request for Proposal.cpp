#include <bits/stdc++.h>
#include <utility>
#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	int a , b ,c ;
	char name[1001][81];
	char req[1001][81];
	float price[1001];
	char judul[1001][81];
	int num[1001];
	int now ;
	int count = 0 ;
	while (scanf("%i %i",&a,&b),a || b ) {
		for ( int i =  0 ; i < a ; i ++ ) {
			fflush(stdin);
			gets(name[i]);	
		}
		for ( int j = 0  ; j < b ; j ++ ) {
			fflush(stdin);
			gets(judul[j]);
			fflush(stdin);
			scanf("%f %i",&price[j],&num[j]);
			for ( int k = 0 ; k < num[j] ; k++ ) {
					fflush(stdin);
				cin >> req[k];
				fflush(stdin);
			}
			if ( j == 0 ) {
				now = 0 ;
			}
			else { 
				if ( num[j] > num[now] ) {
					now = j ;
				}
				else if (num[j] == num[now]){
					if(price[j] < price[now])
						now = j ; 
				}
					
			}
		}
		count ++;
	printf("RFP %i\n",count);
	printf("%s\n\n",judul[now]);
	
	
}
}
