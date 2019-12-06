#include <bits/stdc++.h>
#include <utility>
#include <iostream>
using namespace std;

int main() {

int bulan ,a,i,m;
double bulandebit[101],p;
double pinjaman , bayarbulanan ,hargamobil;
double kali ;
double hitung ;
scanf("%i",&bulan);
while ( bulan >= 0 ) {
	int count = 0 ; \
	int awal = 0 ;
	scanf("%lf %lf %i",&bayarbulanan,&pinjaman,&a);
	while (a--) {
		cin >> m >> p ;
		for (int i = m ; i < 101 ; i ++ ) {
			bulandebit[i] = p ;
		}
	}
	hargamobil = (pinjaman + bayarbulanan )*(1-bulandebit[0]) ;
	hitung = pinjaman / bulan ; 
	while ( pinjaman > hargamobil) {
		count ++;
	    pinjaman -= hitung ; 
	    hargamobil = hargamobil * ( 1 - bulandebit[count]) ;

	}
	if (count == 1 ) 
		printf("1 month\n");
	else
		printf("%i months\n",count);
	scanf("%i",&bulan);
}
}
