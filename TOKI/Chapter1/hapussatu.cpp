#include <bits/stdc++.h>
#include <string>

using namespace std ; 

int main () {
	char a[1001] ; 
	char b[1001]  ; 
	
	cin >> a >> b ; 
	
	if ( strlen(a) <= strlen(b) ) {
		printf("Wah, tidak bisa :(\n");
	}
	else {
		int count  = 0 ;
		int j = 0 ;   
		for ( int i = 0 ; i < strlen(a) ; i ++ ) {
			if (count > 1 )
				break ; 
			if ( a[i] == b[j] ) {
				j++; 
			}
			else { 
				count++ ; 
			}
		}
		if ( count == 1 )  {
			printf("Tentu saja bisa!\n");
			
		}
		else {
			printf("Wah, tidak bisa :(\n");
			
	}
} }
