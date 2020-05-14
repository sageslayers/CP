#include <bits/stdc++.h>
using namespace std ;

int main () { 


ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {
		long long x, y ; 
		cin >> x >> y ; 
		long long a , b ; 
		cin >> a >> b;  
		long long sum = min(x,y); 
		sum = min(sum*2*a,sum*b) +  abs(x-y) *a ; 
		int sum2 = abs(x-y); 
		cout << sum << endl ;
		
	
}


}
