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
		for (int j = 0 ; j < b ; j++ ){
			scanf("%i",&c[j]);
		}
		int count = 1 ; 
		for (int k = 0 ; k < b ; k++) {
			for ( int l = k+1 ; l < b ; l++ ) {
				if (c[k] - c[l] == 1 || c[k] - c[l] == -1 ) {
					count = 2 ;
					break ;
				}
			}
		}
		printf("%i\n",count);
	}
}
