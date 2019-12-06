#include <bits/stdc++.h>
#include <utility>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

int main () {
	int a , b  ;
	char x[3];
	char last[3];
	while ( scanf("%i",&a) , a ) {
		for ( int i = 0 ; i < a-1 ; i ++  ) {
			scanf("%s",&x);
			
			if ( i == 0 && strcmp(x,"No") != 0  )
				strcpy(last,x);
			else if (i == 0 && strcmp(x,"No") == 0 ) 
				strcpy(last,"+x");
			else {
				if (strcmp(last,"+x") == 0 ) {
					if ( strcmp(x,"-x") == 0 ) 
						strcpy(last,"-x");
					else if ( strcmp(x,"+y") == 0 )
						strcpy(last,"+y");
					else if ( strcmp(x,"-y") == 0 )
						strcpy(last,"-y");
					else if ( strcmp(x,"+z") == 0 )
						strcpy(last,"+z");
					else if ( strcmp(x,"-z") == 0 )
						strcpy(last,"-z");
			}
				else if (strcmp(last,"-x") == 0 ) {
					if ( strcmp(x,"-x") == 0 ) 
						strcpy(last,"+x");
					else if ( strcmp(x,"+y") == 0 )
						strcpy(last,"-y");
					else if ( strcmp(x,"-y") == 0 )
						strcpy(last,"+y");
					else if ( strcmp(x,"+z") == 0 )
						strcpy(last,"-z");
					else if ( strcmp(x,"-z") == 0 )
						strcpy(last,"+z");
			}
				else if (strcmp(last,"+y") == 0 ) {
					if ( strcmp(x,"-y") == 0 ) 
						strcpy(last,"+x");
					else if ( strcmp(x,"+z") == 0 )
						strcpy(last,"+y");
					else if ( strcmp(x,"-z") == 0 )
						strcpy(last,"+y");
					else if ( strcmp(x,"+y") == 0 )
						strcpy(last,"-x");
			}
			else if (strcmp(last,"-y") == 0 ) {
					if ( strcmp(x,"+y") == 0 ) 
						strcpy(last,"+x");
					else if ( strcmp(x,"+z") == 0 )
						strcpy(last,"-y");
					else if ( strcmp(x,"-z") == 0 )
						strcpy(last,"-y");
					else if ( strcmp(x,"-y") == 0 ) 
						strcpy(last,"-x"); 
			}
			else if (strcmp(last,"+z") == 0 ) {
					if ( strcmp(x,"-x") == 0 ) 
						strcpy(last,"-z");
					else if ( strcmp(x,"-z") == 0 )
						strcpy(last,"+x");
					else if (strcmp(x,"+z") ==  0 ) 
						strcpy(last,"-x");
				
			}
				else if (strcmp(last,"-z") == 0 ) {
					if ( strcmp(x,"+x") == 0 ) 
						strcpy(last,"+z");
					else if ( strcmp(x,"+z") == 0 )
						strcpy(last,"+x");
						else if ( strcmp(x,"-z") == 0 )
						strcpy(last,"-x");
				
			}
		}
		}
		printf("%s\n",last);
	} }
			
	
