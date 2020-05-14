#include <bits/stdc++.h>
#include <utility>
#include <iostream>
using namespace std;

int main() {

int bulan ,a,i;
pair <int,double> bulandebit[101];
double pinjaman , bayarbulanan ,hargamobil;
double kali ;
double hitung ;
scanf("%i",&bulan);
while ( bulan >= 0 ) {
	int count = 0 ; \
	int awal = 0 ;
	scanf("%lf %lf %i",&bayarbulanan,&pinjaman,&a);
	hargamobil = pinjaman + bayarbulanan ; 
	for ( i = 0 ; i < a ; i ++ ) 
		scanf("%i %lf",&bulandebit[i].first,&bulandebit[i].second);
	kali = bulandebit[count].second;
	hargamobil = hargamobil - (hargamobil * kali);
	hitung = pinjaman / bulan ; 
	awal ++;
	while ( pinjaman > hargamobil) {
		count++;
	    if ( bulandebit[awal].first != count ) {
			pinjaman -= hitung ; 
			hargamobil = hargamobil - (hargamobil* kali); }
		else {
			kali = bulandebit[awal].second ; 
			pinjaman-=hitung ;
			hargamobil = hargamobil - (hargamobil* kali);
			awal++;
			
		}
	}
	if (count == 1 ) 
		printf("1 month\n");
	else
		printf("%i months\n",count);
	scanf("%i",&bulan);
}
}
