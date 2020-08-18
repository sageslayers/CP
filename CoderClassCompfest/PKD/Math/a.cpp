#include<bits/stdc++.h>

using namespace std ;

int main() { 
	
	long long int n , a , b ; 
	cin >> n >> a >> b;  
	cout << n/a + n/b - n/ ( a* b / __gcd(a,b)) << endl ;
	
}
