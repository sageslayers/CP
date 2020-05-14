#include <bits/stdc++.h>

using namespace std ;


int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {
	int n ; 
	cin >> n; 
vector<long long> vect(n) ;
long long a = 0 ; 
long long b = 0 ; 
long long x = 2 ; 
for ( int i = 0 ; i < n ; i ++ ) { 
	vect[i] = x ; 
	x*= 2; 
}
a += vect[n-1] ; 
for (int i = 0 ; i < (n/2) - 1 ; i ++ ) 
	a+= vect[i] ; 
for (int i = n/2 -1 ; i < n-1 ; i ++ )
	b+= vect[i] ; 
cout << abs(a-b) << endl ; 

}


}
