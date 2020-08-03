#include <bits/stdc++.h> 
#define MOD 1000000007


using namespace std; 
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	
	int  a ,  b  ;
	int c ,  d  ; 
	long long int lcm = 0 ; 
	long long int sum = 0 ; 
	cin >> a >> b >> c >> d ;
	lcm = 1ll * b * (d / __gcd(b,d));
	sum += (1ll * (lcm / b) * a ) + (1ll*(lcm / d) * c );
	cout << (sum /__gcd(sum,lcm)) << " " << (lcm/__gcd(sum,lcm)) << endl;
	
	
}
