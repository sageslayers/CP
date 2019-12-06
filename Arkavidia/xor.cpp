#include <bits/stdc++.h> 
#define MOD 1000000007
using namespace std; 
  


int main() 
{
	ios_base::sync_with_stdio(false); 
	int d ; 
	cin >> d ; 
	while(d--){
	long long unsigned a,b ;  
    scanf("%llu %llu",&a,&b );
    long long unsigned jumlah = a ; 
    for ( int i = a ;  i < b ; i ++ )  {
			jumlah = jumlah ^ i + 1 % MOD ;
	}
	printf("%llu\n",jumlah);  
}
    return 0; 
} 
