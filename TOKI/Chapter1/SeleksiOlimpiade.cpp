#include <bits/stdc++.h>
#include <algorithm>
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

using namespace std;
typedef struct {
	char nama[7] ;
	int nilai1,nilai2,nilai3;
}pst ;

bool comparator (pst peserta1 , pst peserta2 ){
	if ( peserta1.nilai3 != peserta2.nilai3 )
		return peserta1.nilai3 > peserta2.nilai3;
	if ( peserta1.nilai2 != peserta2.nilai2 )
		return peserta1.nilai2 > peserta2.nilai2;
	if (peserta1.nilai1 != peserta2.nilai1 )
		return peserta1.nilai1 > peserta2.nilai1;
}
int main() {
	pst peserta[81];
	char check[7];
	int tcase , jml , winner ;
	scanf("%i",&tcase);
	for (int i = 0 ; i < tcase ; i ++ ) {
		int flag = 0 ;
		scanf("%i %i",&jml,&winner);
		scanf("%s",&check);
		for ( int j = 0 ; j < jml ; j ++ ) {
			scanf("%s",&peserta[j].nama);
			scanf("%i %i %i",&peserta[j].nilai1,&peserta[j].nilai2,&peserta[j].nilai3);
		}
		sort (peserta,peserta+jml,comparator);
	for ( int k = 0 ; k < winner ; k ++ ) {
	if ( strcmp (check,peserta[k].nama) == 0 ) {
		flag = 1 ; 
		break ; 
	}
}
	if ( flag == 1 ) 
		printf("YA\n");
	else 
		printf("TIDAK\n");

}
}
