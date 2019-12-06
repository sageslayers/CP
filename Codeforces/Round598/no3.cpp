#include <bits/stdc++.h>
#define loop(i,a,b) for(int i = a; i < b; ++ i)
#define IOS ios_base::sync_with_stdio(0);
#define ll long long //data types used often, but you don't want to type them time by time
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define REMAX(a,b) (a)=max((a),(b)) // set a to the maximum of a and b
#define REMIN(a,b) (a)=min((a),(b));
#define mp make_pair
#define fi first
#define se second
#define getI(a) scanf("%d", &a) //next three are handy ways to get ints, it's also force you to use '&' sign
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define p printf

using namespace std;

int main () {
	int panjang, banyak, jarak ; 
	
	scanf("%i %i %i",&panjang,&banyak,&jarak);
	int balok[banyak];
	for ( int i = 0 ; i < banyak ; i ++ ) {
		scanf("%i",&balok[i]);
	}
	int hitung = 0 ;
	int flag = 0 ;
	int arr[panjang+1]; 
	int count = 0 ;
	if (jarak > panjang ) {
		flag = 1 ; 
		while ( hitung != banyak ) {
			for ( int y = 0 ; y < balok[hitung] ; y ++ ) {
				arr[count] = hitung + 1 ; 
				count ++ ;  
			}
			hitung ++ ; 
		}
		for ( int x = count ; x < panjang ;x++ )
			arr[x] = 0 ; 
	}
	else { 
	for ( int j = 0 ; j  < panjang ;  j ++ ) {
		int x = 0 ;
		
		for ( x = 0 ; x < jarak-1 ; x ++ ) {
			arr[count] = 0 ; 
			count ++ ; 
			 }
		if ( hitung != banyak ) {
			for ( int y = 0 ; y < balok[hitung] ; y ++ ) {
				arr[count] = hitung + 1 ; 
				count ++ ;  
			}
			hitung ++ ; 
		}
		j = count ; 
		
	}
	for ( int f = panjang-jarak ; f < panjang ; f++ ){
		if (arr[f] != 0) {
			flag = 1;  
			f = panjang ;
		}
	}
}
	if (flag == 1 ){
		printf("yes\n");
	for ( int i = 0 ; i < panjang ; i ++ ) {
		printf("%i ",arr[i]);
	}
}
else{
	p("no\n");
}
	
}
