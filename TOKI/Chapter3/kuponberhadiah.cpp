#include<bits/stdc++.h>



using namespace std ;


int main () 
{ 
	int n ; 
	int murni ; 
	int angka ; 
	int lastsaved ;
	int min ; 
	
	scanf("%i %i",&n,&murni);
	scanf("%i",&angka);
	lastsaved = angka;
	min = abs(murni-angka);
	n-- ; 
	//printf("#1>%i\n",min);
	while(n--){
		scanf("%i",&angka);
		if( abs(murni-angka) <= min ){
			if (abs(murni-angka) == min){
				if(angka < lastsaved ) {
					lastsaved = angka ; 
					min = (abs(murni-angka)) ; 
				}
			}
			else {
				lastsaved = angka ; 
					min = (abs(murni-angka)) ; 
			}
			//printf("#2>%i\n",min);
			
		}
	}
	
	printf("%i\n",lastsaved);
	
	
}
