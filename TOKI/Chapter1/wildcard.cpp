#include <bits/stdc++.h>
#include <string>

using namespace std ; 

int main () {
	char wildcard[101] ; 
	cin >>  wildcard ;
	int b ; 
	cin >> b ; 
	char c[b+1][101];
	int start ; 
	for ( int i = 0 ; i < b ; ++i )
		cin >> c[i] ;
	for (int i = 0 ; i < strlen(wildcard) ; ++i) {
		if (wildcard[i] == '*' ) {
			start = i ;
			break; }
	}
		char stringa[start+1];
		char stringb[start+1];
		char stringc[start+1];
		char stringd[start+1];
	if ( start == 0 ) {
		if (wildcard[1] == '\0') {
		for (int i = 0 ; i < b ; i++ ) 
			printf("%s\n",c[i]);
		}
		else {	
			int x = 0 ; 
			for ( int i = 1 ; i <= strlen(wildcard) ; i++ ) {
				
				if ( i == strlen(wildcard) ) 
					stringa[x] = '\0' ;
				else 
					stringa[x] = wildcard[i];
				x++ ; 	
			}
			for ( int i = 0 ; i < b ; i ++ ) {
				if (strlen (c[i]) >= strlen(stringa) ) {
					int x= 0 ; 
					for (int j = strlen(c[i]) - strlen(stringa) ; j <= strlen(c[i])   ; j++ ) {
						if ( j == strlen(c[i]) )
							stringb[x] = '\0' ; 
						else
							stringb[x] = c[i][j] ; 
							x++; 
						
					}
				}
				else 
					continue;
				if (strcmp(stringa,stringb) == 0 )
					printf("%s\n",c[i]);
			}
				
			
			}
		
	}
	else {
	
		for (int i = 0 ; i <= start ; i++) {
			if (i == start) 
				stringa[i] = '\0';
			else
				stringa[i] = wildcard[i] ; 
		}
	if ( strlen(wildcard) - start >= 1 ) {
		int x = 0 ; 
		for ( int i = start+1 ; i <= strlen(wildcard) ; i ++ ) {
			if ( i == strlen(wildcard) )
				stringc[x] = '\0' ; 
			else 
				stringc[x] = wildcard[i] ;
		x++;	
		}
		
	}
		for (int i = 0 ; i < b ; i ++ ) {
			
			
			for ( int j = 0 ; j <= start && j<= strlen(c[i]) ; j ++ ) {
				if (j == start || j == strlen(c[i]))
					stringb[j] = '\0' ;
				else
					stringb[j] = c[i][j];
			}
			if ( strlen(c[i]) >= strlen(stringc) + strlen(stringa) ) { 
				int x = 0 ; 
			for ( int j =  strlen(c[i]) - strlen(stringc)  ; j <= strlen(c[i]) ; j ++ ) {
				if (j == strlen(c[i]) )
					stringd[x] = '\0' ;
				else
					stringd[x] = c[i][j];
				x++;
			}
			
		}
		else {
			stringd[0] = '\0';
		}
			if ( wildcard[start+1] != '\0' ) { 
			if ( strcmp(stringa,stringb) == 0 && strcmp(stringc,stringd) == 0 ){
				printf("%s\n",c[i]); } }
			else {
				if ( strcmp(stringa,stringb) == 0  )
				printf("%s\n",c[i]);
			}
	}
	
	}
}
	
