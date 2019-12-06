#include <bits/stdc++.h> 
#define MOD 1000000007
using namespace std; 
  


int main() 
{
	ios_base::sync_with_stdio(false); 
	int b ; 
	
	char a [101] ;
	int count = 0 ; 
	cin >> a ; 
	for ( int i = 0 ; i < strlen(a); i ++ ) 
		{
			if(a[i] == 'o' || a[i] == 'O' )
				count ++ ; 
			}
		if ( count != 1 ) 
			printf("Tidak\n");
		else
			printf("Ya\n");
			
		}
