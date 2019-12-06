#include <bits/stdc++.h>


using namespace std ;

int main () { 
	double a , b, c ; 
	int d; 
	
	while ( scanf("%lf %lf %lf %i",&a,&b,&c,&d),a) {
		int count = 1 ;
		double cap = a ;
		double tinggi = 0 ;
		float fat = b * d/100;
		while ( tinggi >=0 && tinggi <=a) {
			
			if (b>=0)
				tinggi+= b ;
			if (tinggi <= a)
				tinggi -= c ;
			if ( tinggi < 0 || tinggi > a )
				break;
			b = b - fat;
			count++;
			
		}
		if(tinggi< 0){
			printf("failure on day %i\n",count);
		}
		else {
			printf("success on day %i\n",count);
		}
	}
	
}
