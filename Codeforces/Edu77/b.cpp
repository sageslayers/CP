#include <bits/stdc++.h> 
#define MOD 1000000007



using namespace std; 
int main() 
{
	long long int a , b ; 
	int t ;
	scanf("%i",&t);
	while(t--) {
		scanf("%lli %lli",&a,&b);
			a = a % 3 ; 
			//printf("#%i\n",a);
			b = b % 3 ; 
			//printf("#%i\n",b);
			int sum = (a + b) % 3;  
			//printf("#%i\n",sum);
			if ( sum == 0  )
				printf("yes\n");
			else 
				printf("no\n");
		}
	}
	

