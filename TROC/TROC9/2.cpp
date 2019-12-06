#include <bits/stdc++.h> 
#define MOD 1000000007
using namespace std; 
  


int main() 
{
	
unsigned long long a[3] , sum ;
scanf("%llu %llu %llu",&a[0] , &a[1], &a[2]);
sort (a , a+3);
if ( a[0] == a[2] -1 && a[1] == a[2] -1 && a[0] + a[1] > a[2] && a[1] + a[2] > a[0] && a[0] + a[2] > a[1] )
	printf("Ya\n");
else 
	printf("Tidak\n");

}

