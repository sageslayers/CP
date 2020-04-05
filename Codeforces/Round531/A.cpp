#include<bits/stdc++.h>

using namespace std ;

int main() {
int n ; 
cin >> n ; 
n%= 100 ; 
long long sum =  n * ( n + 1 ) / 2 ;
if ( sum % 2 == 1 )
cout << 1 << endl ; 
else
cout << 0 << endl ; 

}
